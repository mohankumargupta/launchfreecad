set shell := ["sh", "-c"]
set windows-shell := ["powershell", "-c"]

_main:
    @just --list

main:
    uv run main.py

