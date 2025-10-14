import slint
from slint import ListModel
from pathlib import Path
from packaging import version
import re
import subprocess
import sys

class AppUtils:
    @staticmethod
    def findFreecadDirectories():
        downloads_dir = Path.home() / 'Downloads'
        if not downloads_dir.exists():
            return []
        dir_names = [item.name for item in downloads_dir.iterdir() if item.is_dir() and item.name.startswith("FreeCAD")]

        def get_version_key(name):
            match = re.search(r'(\d+(\.\d+)*)', name)
            if match:
                return version.parse(match.group(0))
            else:
                return version.parse("0.0.0")
        
        dir_names.sort(key=get_version_key, reverse=True)
        return dir_names

class MainWindow(slint.loader.main.LaunchFreecadWindow):
    def __init__(self):
        super().__init__()
        self.downloads_dir = Path.home() / 'Downloads'

    @slint.callback
    def launch_freecad(self, selected_dir_name: str):
        if not selected_dir_name:
            print("No FreeCAD version selected.")
            return

        print(f"Launch command received for: {selected_dir_name}")
        base_path = self.downloads_dir / selected_dir_name
        if sys.platform == "win32":
            exe_path = base_path / "bin" / "FreeCAD.exe"
        elif sys.platform == "darwin":
            exe_path = base_path / "Contents" / "MacOS" / "FreeCAD"
        else:
            exe_path = base_path / "bin" / "FreeCAD"

        if exe_path.exists():
            print(f"Executing: {exe_path}")
            try:
                subprocess.Popen([exe_path])
                self.hide()
            except Exception as e:
                print(f"Error launching FreeCAD: {e}")
        else:
            print(f"Error: Executable not found at {exe_path}")

def main():
    main_window = MainWindow()
    freecad_dirs = AppUtils.findFreecadDirectories()
    main_window.freecads = ListModel(freecad_dirs)
    main_window.run()
    
if __name__ == "__main__":
    main()

