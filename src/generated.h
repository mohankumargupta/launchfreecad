// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
static_assert(1 == SLINT_VERSION_MAJOR && 13 == SLINT_VERSION_MINOR && 1 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.13.1, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class AppWindow;

class SharedGlobals;

class ComboBoxBase_root_1;

class FocusBorder_root_4;

class ComboBox_root_6;

class Button_root_58;

class ComboBoxBase_root_1 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_1_close_popup;
    slint::private_api::Property<int> root_1_current_index;
    slint::private_api::Property<slint::SharedString> root_1_current_value;
    slint::private_api::Property<bool> root_1_has_focus;
    slint::private_api::Property<float> root_1_height;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::SharedString>>> root_1_model;
    slint::private_api::Property<bool> root_1_popup_has_focus;
    slint::private_api::Callback<void(slint::SharedString)> root_1_selected;
    slint::private_api::Callback<void()> root_1_show_popup;
    slint::private_api::Property<float> root_1_width;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    slint::private_api::ChangeTracker change_tracker2;
    slint::cbindgen_private::Empty root_1 = {};
    slint::cbindgen_private::FocusScope i_focus_scope_2 = {};
    slint::cbindgen_private::TouchArea i_touch_area_3 = {};
    auto fn_clear_focus () const -> void;
    auto fn_focus () const -> void;
    auto fn_move_selection_down () const -> void;
    auto fn_move_selection_up () const -> void;
    auto fn_popup_key_handler (slint::private_api::KeyEvent arg_0) const -> slint::cbindgen_private::EventResult;
    auto fn_reset_current () const -> void;
    auto fn_select (int arg_0) const -> void;
    auto fn_update_current_value () const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class FocusBorder_root_4 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> root_4_height;
    slint::private_api::Property<float> root_4_width;
    slint::cbindgen_private::BasicBorderRectangle root_4 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_5 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class Component_focusborder_24 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_23 const> parent;
    FocusBorder_root_4 focusborder_24;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_23 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_23 const * parent) -> slint::ComponentHandle<Component_focusborder_24>;
    ~Component_focusborder_24 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_24>;
};

class Component_empty_23 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_popup_14 const> parent;
    slint::private_api::Property<slint::SharedString> model_data;
    slint::private_api::Property<int> model_index;
    slint::private_api::Property<float> empty_23_height;
    slint::private_api::Property<float> empty_23_i_background_26_width;
    slint::private_api::Property<float> empty_23_i_background_26_x;
    slint::private_api::Property<float> empty_23_i_background_26_y;
    slint::private_api::Property<slint::SharedVector<float>> empty_23_i_layout_27_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_23_i_layout_27_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_23_i_layout_27_layoutinfo_v;
    slint::private_api::Property<float> empty_23_i_selector_29_height;
    slint::private_api::Property<float> empty_23_i_selector_29_y;
    slint::private_api::Property<bool> empty_23_is_selected;
    slint::private_api::Property<int> empty_23_state;
    slint::private_api::Property<float> empty_23_y;
    slint::cbindgen_private::Empty empty_23 = {};
    slint::cbindgen_private::BasicBorderRectangle i_background_26 = {};
    slint::cbindgen_private::ComplexText i_text_28 = {};
    slint::cbindgen_private::BasicBorderRectangle i_selector_29 = {};
    slint::cbindgen_private::TouchArea touch_area_30 = {};
    slint::private_api::Conditional<class Component_focusborder_24> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_popup_14 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_popup_14 const * parent) -> slint::ComponentHandle<Component_empty_23>;
    ~Component_empty_23 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::SharedString &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_23>;
};

class Component_popup_14 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ComboBox_root_6 const> parent;
    slint::private_api::Property<int> popup_14_down_scroll_button_42_state;
    slint::private_api::Property<int> popup_14_down_scroll_button_55_state;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> popup_14_empty_19_horizontal_scrollbar_policy;
    slint::private_api::Property<slint::private_api::LayoutInfo> popup_14_empty_19_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> popup_14_empty_19_layoutinfo_v;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> popup_14_empty_19_vertical_scrollbar_policy;
    slint::private_api::Property<float> popup_14_empty_19_visible_height;
    slint::private_api::Property<float> popup_14_empty_19_visible_width;
    slint::private_api::Property<slint::SharedVector<float>> popup_14_empty_22_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> popup_14_empty_22_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> popup_14_empty_22_layoutinfo_v;
    slint::private_api::Property<float> popup_14_flickable_20_horizontal_stretch;
    slint::private_api::Property<float> popup_14_flickable_20_max_height;
    slint::private_api::Property<float> popup_14_flickable_20_max_width;
    slint::private_api::Property<float> popup_14_flickable_20_min_height;
    slint::private_api::Property<float> popup_14_flickable_20_min_width;
    slint::private_api::Property<float> popup_14_flickable_20_preferred_height;
    slint::private_api::Property<float> popup_14_flickable_20_preferred_width;
    slint::private_api::Property<float> popup_14_flickable_20_vertical_stretch;
    slint::private_api::Property<float> popup_14_horizontal_bar_46_maximum;
    slint::private_api::Callback<void()> popup_14_horizontal_bar_46_scrolled;
    slint::private_api::Property<float> popup_14_horizontal_bar_46_size;
    slint::private_api::Property<int> popup_14_horizontal_bar_46_state;
    slint::private_api::Property<bool> popup_14_horizontal_bar_46_visible;
    slint::private_api::Property<float> popup_14_inner_fs_15_height;
    slint::private_api::Property<float> popup_14_inner_fs_15_width;
    slint::private_api::Property<slint::private_api::LayoutInfo> popup_14_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> popup_14_layoutinfo_v;
    slint::private_api::Property<float> popup_14_rectangle_17_width;
    slint::private_api::Property<float> popup_14_thumb_35_height;
    slint::private_api::Property<float> popup_14_thumb_35_width;
    slint::private_api::Property<float> popup_14_thumb_35_y;
    slint::private_api::Property<float> popup_14_thumb_48_height;
    slint::private_api::Property<float> popup_14_thumb_48_width;
    slint::private_api::Property<float> popup_14_thumb_48_x;
    slint::private_api::Property<float> popup_14_touch_area_36_pressed_value;
    slint::private_api::Property<float> popup_14_touch_area_49_pressed_value;
    slint::private_api::Property<int> popup_14_up_scroll_button_38_state;
    slint::private_api::Property<int> popup_14_up_scroll_button_51_state;
    slint::private_api::Property<float> popup_14_vertical_bar_33_maximum;
    slint::private_api::Callback<void()> popup_14_vertical_bar_33_scrolled;
    slint::private_api::Property<float> popup_14_vertical_bar_33_size;
    slint::private_api::Property<int> popup_14_vertical_bar_33_state;
    slint::private_api::Property<bool> popup_14_vertical_bar_33_visible;
    slint::private_api::Property<float> popup_14_x;
    slint::private_api::Property<float> popup_14_y;
    slint::cbindgen_private::WindowItem popup_14 = {};
    slint::cbindgen_private::FocusScope inner_fs_15 = {};
    slint::cbindgen_private::BoxShadow _shadow_16 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_17 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_18 = {};
    slint::cbindgen_private::Flickable flickable_20 = {};
    slint::cbindgen_private::Empty flickable_viewport_21 = {};
    slint::cbindgen_private::Clip vertical_bar_visibility_32 = {};
    slint::cbindgen_private::BasicBorderRectangle vertical_bar_33 = {};
    slint::cbindgen_private::Clip vertical_bar_clip_34 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_35 = {};
    slint::cbindgen_private::TouchArea touch_area_36 = {};
    slint::cbindgen_private::Opacity up_scroll_button_opacity_37 = {};
    slint::cbindgen_private::TouchArea up_scroll_button_38 = {};
    slint::cbindgen_private::Opacity icon_opacity_39 = {};
    slint::cbindgen_private::ImageItem icon_40 = {};
    slint::cbindgen_private::Opacity down_scroll_button_opacity_41 = {};
    slint::cbindgen_private::TouchArea down_scroll_button_42 = {};
    slint::cbindgen_private::Opacity icon_opacity_43 = {};
    slint::cbindgen_private::ImageItem icon_44 = {};
    slint::cbindgen_private::Clip horizontal_bar_visibility_45 = {};
    slint::cbindgen_private::BasicBorderRectangle horizontal_bar_46 = {};
    slint::cbindgen_private::Clip horizontal_bar_clip_47 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_48 = {};
    slint::cbindgen_private::TouchArea touch_area_49 = {};
    slint::cbindgen_private::Opacity up_scroll_button_opacity_50 = {};
    slint::cbindgen_private::TouchArea up_scroll_button_51 = {};
    slint::cbindgen_private::Opacity icon_opacity_52 = {};
    slint::cbindgen_private::ImageItem icon_53 = {};
    slint::cbindgen_private::Opacity down_scroll_button_opacity_54 = {};
    slint::cbindgen_private::TouchArea down_scroll_button_55 = {};
    slint::cbindgen_private::Opacity icon_opacity_56 = {};
    slint::cbindgen_private::ImageItem icon_57 = {};
    slint::private_api::Repeater<class Component_empty_23, slint::SharedString> repeater_0;
    auto fn_focus () const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ComboBox_root_6 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ComboBox_root_6 const * parent) -> slint::ComponentHandle<Component_popup_14>;
    ~Component_popup_14 ();
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_popup_14>;
};

class Component_focusborder_12 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ComboBox_root_6 const> parent;
    FocusBorder_root_4 focusborder_12;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ComboBox_root_6 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ComboBox_root_6 const * parent) -> slint::ComponentHandle<Component_focusborder_12>;
    ~Component_focusborder_12 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_12>;
};

class ComboBox_root_6 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_6_accessible_action_expand;
    slint::private_api::Property<float> root_6_background_8_width;
    slint::private_api::Property<float> root_6_height;
    slint::private_api::Property<slint::SharedVector<float>> root_6_layout_9_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_6_layout_9_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_6_layout_9_layoutinfo_v;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_6_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_6_layoutinfo_v;
    slint::private_api::Property<int> root_6_state;
    slint::private_api::Property<float> root_6_width;
    slint::private_api::Property<float> root_6_x;
    slint::private_api::Property<float> root_6_y;
    ComboBoxBase_root_1 base_7;
    mutable uint32_t popup_id_0;
    slint::cbindgen_private::Empty root_6 = {};
    slint::cbindgen_private::BasicBorderRectangle background_8 = {};
    slint::cbindgen_private::SimpleText text_10 = {};
    slint::cbindgen_private::ImageItem icon_11 = {};
    slint::private_api::Conditional<class Component_focusborder_12> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class Component_image_62 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_58 const> parent;
    slint::cbindgen_private::ImageItem image_62 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_58 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_58 const * parent) -> slint::ComponentHandle<Component_image_62>;
    ~Component_image_62 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_62>;
};

class Component_text_64 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_58 const> parent;
    slint::cbindgen_private::SimpleText text_64 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_58 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_58 const * parent) -> slint::ComponentHandle<Component_text_64>;
    ~Component_text_64 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_64>;
};

class Component_focusborder_68 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_58 const> parent;
    FocusBorder_root_4 focusborder_68;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_58 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_58 const * parent) -> slint::ComponentHandle<Component_focusborder_68>;
    ~Component_focusborder_68 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_68>;
};

class Button_root_58 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_58_accessible_action_default;
    slint::private_api::Property<bool> root_58_checked;
    slint::private_api::Callback<void()> root_58_clicked;
    slint::private_api::Property<bool> root_58_has_focus;
    slint::private_api::Property<float> root_58_height;
    slint::private_api::Property<float> root_58_i_background_59_width;
    slint::private_api::Property<slint::SharedVector<float>> root_58_i_layout_61_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_58_i_layout_61_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_58_i_layout_61_layoutinfo_v;
    slint::private_api::Property<slint::Image> root_58_icon;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_58_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_58_layoutinfo_v;
    slint::private_api::Property<bool> root_58_pressed;
    slint::private_api::Property<int> root_58_state;
    slint::private_api::Property<slint::SharedString> root_58_text;
    slint::private_api::Property<slint::Brush> root_58_text_color;
    slint::private_api::Property<float> root_58_width;
    slint::private_api::Property<float> root_58_x;
    slint::private_api::Property<float> root_58_y;
    slint::cbindgen_private::Empty root_58 = {};
    slint::cbindgen_private::BasicBorderRectangle i_background_59 = {};
    slint::cbindgen_private::BasicBorderRectangle i_border_60 = {};
    slint::cbindgen_private::TouchArea i_touch_area_66 = {};
    slint::cbindgen_private::FocusScope i_focus_scope_67 = {};
    slint::private_api::Conditional<class Component_image_62> repeater_0;
    slint::private_api::Conditional<class Component_text_64> repeater_1;
    slint::private_api::Conditional<class Component_focusborder_68> repeater_2;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class FluentPalette_76 {
    public:
    slint::private_api::Property<slint::Brush> background;
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> color_scheme;
    slint::private_api::Property<slint::Brush> control_border;
    slint::private_api::Property<bool> dark_color_scheme;
    slint::private_api::Property<slint::Brush> foreground;
    FluentPalette_76 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    friend class SharedGlobals;
};

class SharedGlobals {
    public:
    std::optional<slint::Window> m_window;
    slint::cbindgen_private::ItemTreeWeak root_weak;
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }
    std::shared_ptr<FluentPalette_76> global_FluentPalette_76 = std::make_shared<FluentPalette_76>(this);
    SharedGlobals (){
        global_FluentPalette_76->init();
    }
};

class AppWindow {
    SharedGlobals m_globals;
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::SharedVector<float>> root_70_empty_71_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_70_empty_71_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_70_empty_71_layoutinfo_v;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::SharedString>>> root_70_freecads;
    slint::private_api::Callback<void(slint::SharedString)> root_70_launch_freecad;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_70_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_70_layoutinfo_v;
    ComboBox_root_6 choices_72;
    Button_root_58 button_73;
    slint::cbindgen_private::WindowItem root_70 = {};
    slint::cbindgen_private::SimpleText text_74 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<AppWindow>;
    ~AppWindow ();
    auto get_freecads () const -> std::shared_ptr<slint::Model<slint::SharedString>>;
    auto set_freecads (const std::shared_ptr<slint::Model<slint::SharedString>> &value) const -> void;
    auto invoke_launch_freecad (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_launch_freecad (Functor && callback_handler) const;
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class FluentPalette_76;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, AppWindow>;
    friend class slint::private_api::WindowAdapterRc;
};

const uint8_t slint_embedded_resource_1[921] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x38,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x36,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x38,0x20,0x36,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa,0x3c,0x70,0x61,0x74
,0x68,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x31,0x43,0x30,0x20,0x30,0x2e,0x38,0x36
,0x34,0x35,0x38,0x33,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x30
,0x2e,0x37,0x33,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35
,0x20,0x30,0x2e,0x36,0x31,0x33,0x32,0x38,0x31,0x43,0x30,0x2e,0x31,0x33,0x30,0x32
,0x30,0x38,0x20,0x30,0x2e,0x34,0x39,0x30,0x38,0x38,0x35,0x20,0x30,0x2e,0x32,0x30
,0x30,0x35,0x32,0x31,0x20,0x30,0x2e,0x33,0x38,0x35,0x34,0x31,0x37,0x20,0x30,0x2e
,0x32,0x38,0x39,0x30,0x36,0x32,0x20,0x30,0x2e,0x32,0x39,0x36,0x38,0x37,0x35,0x43
,0x30,0x2e,0x33,0x38,0x30,0x32,0x30,0x38,0x20,0x30,0x2e,0x32,0x30,0x35,0x37,0x32
,0x39,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x31,0x33,0x34
,0x31,0x31,0x35,0x20,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x20,0x30,0x2e,0x30
,0x38,0x32,0x30,0x33,0x31,0x32,0x43,0x30,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x30
,0x2e,0x30,0x32,0x37,0x33,0x34,0x33,0x38,0x20,0x30,0x2e,0x38,0x35,0x34,0x31,0x36
,0x37,0x20,0x30,0x20,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x20,0x30,0x48,0x37
,0x2e,0x30,0x31,0x31,0x37,0x32,0x43,0x37,0x2e,0x31,0x34,0x37,0x31,0x34,0x20,0x30
,0x20,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34
,0x31,0x37,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x20,0x30,0x2e,0x30,0x37,0x38
,0x31,0x32,0x35,0x43,0x37,0x2e,0x35,0x31,0x36,0x39,0x33,0x20,0x30,0x2e,0x31,0x33
,0x30,0x32,0x30,0x38,0x20,0x37,0x2e,0x36,0x32,0x32,0x34,0x20,0x30,0x2e,0x32,0x30
,0x31,0x38,0x32,0x33,0x20,0x37,0x2e,0x37,0x31,0x30,0x39,0x34,0x20,0x30,0x2e,0x32
,0x39,0x32,0x39,0x36,0x39,0x43,0x37,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x30,0x2e
,0x33,0x38,0x34,0x31,0x31,0x35,0x20,0x37,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x30
,0x2e,0x34,0x39,0x30,0x38,0x38,0x35,0x20,0x37,0x2e,0x39,0x32,0x31,0x38,0x38,0x20
,0x30,0x2e,0x36,0x31,0x33,0x32,0x38,0x31,0x43,0x37,0x2e,0x39,0x37,0x33,0x39,0x36
,0x20,0x30,0x2e,0x37,0x33,0x33,0x30,0x37,0x33,0x20,0x38,0x20,0x30,0x2e,0x38,0x36
,0x30,0x36,0x37,0x37,0x20,0x38,0x20,0x30,0x2e,0x39,0x39,0x36,0x30,0x39,0x34,0x43
,0x38,0x20,0x31,0x2e,0x31,0x30,0x35,0x34,0x37,0x20,0x37,0x2e,0x39,0x38,0x34,0x33
,0x38,0x20,0x31,0x2e,0x32,0x30,0x35,0x37,0x33,0x20,0x37,0x2e,0x39,0x35,0x33,0x31
,0x32,0x20,0x31,0x2e,0x32,0x39,0x36,0x38,0x38,0x43,0x37,0x2e,0x39,0x32,0x34,0x34
,0x38,0x20,0x31,0x2e,0x33,0x38,0x38,0x30,0x32,0x20,0x37,0x2e,0x38,0x38,0x30,0x32
,0x31,0x20,0x31,0x2e,0x34,0x37,0x39,0x31,0x37,0x20,0x37,0x2e,0x38,0x32,0x30,0x33
,0x31,0x20,0x31,0x2e,0x35,0x37,0x30,0x33,0x31,0x4c,0x35,0x2e,0x32,0x31,0x38,0x37
,0x35,0x20,0x35,0x2e,0x33,0x35,0x35,0x34,0x37,0x43,0x35,0x2e,0x30,0x38,0x30,0x37
,0x33,0x20,0x35,0x2e,0x35,0x35,0x35,0x39,0x39,0x20,0x34,0x2e,0x39,0x30,0x33,0x36
,0x35,0x20,0x35,0x2e,0x37,0x31,0x33,0x35,0x34,0x20,0x34,0x2e,0x36,0x38,0x37,0x35
,0x20,0x35,0x2e,0x38,0x32,0x38,0x31,0x32,0x43,0x34,0x2e,0x34,0x37,0x33,0x39,0x36
,0x20,0x35,0x2e,0x39,0x34,0x32,0x37,0x31,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39
,0x20,0x36,0x20,0x34,0x20,0x36,0x43,0x33,0x2e,0x37,0x35,0x35,0x32,0x31,0x20,0x36
,0x20,0x33,0x2e,0x35,0x32,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x34,0x32,0x37,0x31
,0x20,0x33,0x2e,0x33,0x30,0x38,0x35,0x39,0x20,0x35,0x2e,0x38,0x32,0x38,0x31,0x32
,0x43,0x33,0x2e,0x30,0x39,0x35,0x30,0x35,0x20,0x35,0x2e,0x37,0x31,0x33,0x35,0x34
,0x20,0x32,0x2e,0x39,0x31,0x39,0x32,0x37,0x20,0x35,0x2e,0x35,0x35,0x35,0x39,0x39
,0x20,0x32,0x2e,0x37,0x38,0x31,0x32,0x35,0x20,0x35,0x2e,0x33,0x35,0x35,0x34,0x37
,0x4c,0x30,0x2e,0x31,0x37,0x39,0x36,0x38,0x38,0x20,0x31,0x2e,0x35,0x37,0x30,0x33
,0x31,0x43,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x31,0x2e,0x34,0x38,0x31
,0x37,0x37,0x20,0x30,0x2e,0x30,0x37,0x34,0x32,0x31,0x38,0x38,0x20,0x31,0x2e,0x33
,0x39,0x31,0x39,0x33,0x20,0x30,0x2e,0x30,0x34,0x32,0x39,0x36,0x38,0x38,0x20,0x31
,0x2e,0x33,0x30,0x30,0x37,0x38,0x43,0x30,0x2e,0x30,0x31,0x34,0x33,0x32,0x32,0x39
,0x20,0x31,0x2e,0x32,0x30,0x39,0x36,0x34,0x20,0x30,0x20,0x31,0x2e,0x31,0x30,0x39
,0x33,0x38,0x20,0x30,0x20,0x31,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77
,0x68,0x69,0x74,0x65,0x22,0x20,0x66,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69
,0x74,0x79,0x3d,0x22,0x30,0x2e,0x35,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xd,0xa
,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xd,0xa};

const uint8_t slint_embedded_resource_0[492] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x31,0x32,0x22,0x20,0x68
,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x31,0x32,0x22,0x20,0x76,0x69,0x65,0x77,0x42
,0x6f,0x78,0x3d,0x22,0x30,0x20,0x30,0x20,0x31,0x32,0x20,0x31,0x32,0x22,0x20,0x66
,0x69,0x6c,0x6c,0x3d,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73
,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e
,0x6f,0x72,0x67,0x2f,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa
,0x3c,0x70,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x31,0x31,0x2e,0x38,0x35,0x32
,0x37,0x20,0x30,0x2e,0x36,0x34,0x35,0x38,0x31,0x38,0x43,0x31,0x32,0x2e,0x30,0x34
,0x38,0x34,0x20,0x30,0x2e,0x38,0x34,0x30,0x37,0x33,0x32,0x20,0x31,0x32,0x2e,0x30
,0x34,0x38,0x39,0x20,0x31,0x2e,0x31,0x35,0x37,0x33,0x31,0x20,0x31,0x31,0x2e,0x38
,0x35,0x34,0x20,0x31,0x2e,0x33,0x35,0x32,0x39,0x32,0x4c,0x36,0x2e,0x33,0x38,0x39
,0x30,0x32,0x20,0x36,0x2e,0x38,0x33,0x37,0x34,0x31,0x43,0x36,0x2e,0x31,0x37,0x34
,0x30,0x38,0x20,0x37,0x2e,0x30,0x35,0x33,0x31,0x32,0x20,0x35,0x2e,0x38,0x32,0x34
,0x37,0x37,0x20,0x37,0x2e,0x30,0x35,0x33,0x31,0x32,0x20,0x35,0x2e,0x36,0x30,0x39
,0x38,0x32,0x20,0x36,0x2e,0x38,0x33,0x37,0x34,0x31,0x4c,0x30,0x2e,0x31,0x34,0x34
,0x38,0x34,0x20,0x31,0x2e,0x33,0x35,0x32,0x39,0x32,0x43,0x2d,0x30,0x2e,0x30,0x35
,0x30,0x30,0x37,0x33,0x34,0x20,0x31,0x2e,0x31,0x35,0x37,0x33,0x31,0x20,0x2d,0x30
,0x2e,0x30,0x34,0x39,0x35,0x30,0x38,0x38,0x20,0x30,0x2e,0x38,0x34,0x30,0x37,0x33
,0x31,0x20,0x30,0x2e,0x31,0x34,0x36,0x31,0x20,0x30,0x2e,0x36,0x34,0x35,0x38,0x31
,0x37,0x43,0x30,0x2e,0x33,0x34,0x31,0x37,0x31,0x20,0x30,0x2e,0x34,0x35,0x30,0x39
,0x30,0x33,0x20,0x30,0x2e,0x36,0x35,0x38,0x32,0x39,0x32,0x20,0x30,0x2e,0x34,0x35
,0x31,0x34,0x36,0x37,0x20,0x30,0x2e,0x38,0x35,0x33,0x32,0x30,0x36,0x20,0x30,0x2e
,0x36,0x34,0x37,0x30,0x37,0x37,0x4c,0x35,0x2e,0x39,0x39,0x39,0x34,0x32,0x20,0x35
,0x2e,0x38,0x31,0x31,0x36,0x36,0x4c,0x31,0x31,0x2e,0x31,0x34,0x35,0x36,0x20,0x30
,0x2e,0x36,0x34,0x37,0x30,0x37,0x37,0x43,0x31,0x31,0x2e,0x33,0x34,0x30,0x36,0x20
,0x30,0x2e,0x34,0x35,0x31,0x34,0x36,0x38,0x20,0x31,0x31,0x2e,0x36,0x35,0x37,0x31
,0x20,0x30,0x2e,0x34,0x35,0x30,0x39,0x30,0x34,0x20,0x31,0x31,0x2e,0x38,0x35,0x32
,0x37,0x20,0x30,0x2e,0x36,0x34,0x35,0x38,0x31,0x38,0x5a,0x22,0x20,0x66,0x69,0x6c
,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22,0x20,0x66,0x69,0x6c,0x6c,0x2d,0x6f
,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30,0x2e,0x37,0x38,0x36,0x22,0x20,0x2f
,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xd,0xa};

const uint8_t slint_embedded_resource_4[852] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x36,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x38,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x36,0x20,0x38,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa,0x3c,0x70,0x61,0x74
,0x68,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x34,0x43,0x30,0x20,0x33,0x2e,0x37,0x35
,0x35,0x32,0x31,0x20,0x30,0x2e,0x30,0x35,0x37,0x32,0x39,0x31,0x37,0x20,0x33,0x2e
,0x35,0x32,0x36,0x30,0x34,0x20,0x30,0x2e,0x31,0x37,0x31,0x38,0x37,0x35,0x20,0x33
,0x2e,0x33,0x31,0x32,0x35,0x43,0x30,0x2e,0x32,0x38,0x36,0x34,0x35,0x38,0x20,0x33
,0x2e,0x30,0x39,0x36,0x33,0x35,0x20,0x30,0x2e,0x34,0x34,0x34,0x30,0x31,0x20,0x32
,0x2e,0x39,0x31,0x39,0x32,0x37,0x20,0x30,0x2e,0x36,0x34,0x34,0x35,0x33,0x31,0x20
,0x32,0x2e,0x37,0x38,0x31,0x32,0x35,0x4c,0x34,0x2e,0x34,0x32,0x39,0x36,0x39,0x20
,0x30,0x2e,0x31,0x37,0x39,0x36,0x38,0x37,0x43,0x34,0x2e,0x35,0x31,0x38,0x32,0x33
,0x20,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x34,0x2e,0x36,0x30,0x38,0x30
,0x37,0x20,0x30,0x2e,0x30,0x37,0x35,0x35,0x32,0x30,0x38,0x20,0x34,0x2e,0x36,0x39
,0x39,0x32,0x32,0x20,0x30,0x2e,0x30,0x34,0x36,0x38,0x37,0x35,0x43,0x34,0x2e,0x37
,0x39,0x30,0x33,0x36,0x20,0x30,0x2e,0x30,0x31,0x35,0x36,0x32,0x35,0x20,0x34,0x2e
,0x38,0x39,0x30,0x36,0x32,0x20,0x30,0x20,0x35,0x20,0x30,0x43,0x35,0x2e,0x31,0x33
,0x35,0x34,0x32,0x20,0x30,0x20,0x35,0x2e,0x32,0x36,0x34,0x33,0x32,0x20,0x30,0x2e
,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x35,0x2e,0x33,0x38,0x36,0x37,0x32,0x20
,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x43,0x35,0x2e,0x35,0x30,0x39,0x31,0x31
,0x20,0x30,0x2e,0x31,0x33,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x36,0x31,0x34,0x35
,0x38,0x20,0x30,0x2e,0x32,0x30,0x31,0x38,0x32,0x33,0x20,0x35,0x2e,0x37,0x30,0x33
,0x31,0x32,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x43,0x35,0x2e,0x37,0x39
,0x34,0x32,0x37,0x20,0x30,0x2e,0x33,0x38,0x31,0x35,0x31,0x20,0x35,0x2e,0x38,0x36
,0x35,0x38,0x39,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x35,0x2e,0x39
,0x31,0x37,0x39,0x37,0x20,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x43,0x35,0x2e
,0x39,0x37,0x32,0x36,0x36,0x20,0x30,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x36,0x20
,0x30,0x2e,0x38,0x35,0x34,0x31,0x36,0x37,0x20,0x36,0x20,0x30,0x2e,0x39,0x39,0x32
,0x31,0x38,0x37,0x4c,0x36,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x43,0x36,0x20
,0x37,0x2e,0x31,0x34,0x35,0x38,0x33,0x20,0x35,0x2e,0x39,0x37,0x32,0x36,0x36,0x20
,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x31,0x37,0x39,0x37,0x20
,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x43,0x35,0x2e,0x38,0x36,0x35,0x38,0x39,0x20
,0x37,0x2e,0x35,0x31,0x34,0x33,0x32,0x20,0x35,0x2e,0x37,0x39,0x34,0x32,0x37,0x20
,0x37,0x2e,0x36,0x31,0x39,0x37,0x39,0x20,0x35,0x2e,0x37,0x30,0x33,0x31,0x33,0x20
,0x37,0x2e,0x37,0x31,0x30,0x39,0x34,0x43,0x35,0x2e,0x36,0x31,0x34,0x35,0x38,0x20
,0x37,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x35,0x2e,0x35,0x30,0x39,0x31,0x31,0x20
,0x37,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x35,0x2e,0x33,0x38,0x36,0x37,0x32,0x20
,0x37,0x2e,0x39,0x32,0x31,0x38,0x37,0x43,0x35,0x2e,0x32,0x36,0x34,0x33,0x32,0x20
,0x37,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x31,0x33,0x35,0x34,0x32,0x20
,0x38,0x20,0x35,0x20,0x38,0x43,0x34,0x2e,0x37,0x39,0x34,0x32,0x37,0x20,0x38,0x20
,0x34,0x2e,0x36,0x30,0x34,0x31,0x37,0x20,0x37,0x2e,0x39,0x34,0x30,0x31,0x20,0x34
,0x2e,0x34,0x32,0x39,0x36,0x39,0x20,0x37,0x2e,0x38,0x32,0x30,0x33,0x31,0x4c,0x30
,0x2e,0x36,0x34,0x34,0x35,0x33,0x31,0x20,0x35,0x2e,0x32,0x31,0x38,0x37,0x35,0x43
,0x30,0x2e,0x34,0x34,0x34,0x30,0x31,0x20,0x35,0x2e,0x30,0x38,0x30,0x37,0x33,0x20
,0x30,0x2e,0x32,0x38,0x36,0x34,0x35,0x38,0x20,0x34,0x2e,0x39,0x30,0x34,0x39,0x35
,0x20,0x30,0x2e,0x31,0x37,0x31,0x38,0x37,0x35,0x20,0x34,0x2e,0x36,0x39,0x31,0x34
,0x31,0x43,0x30,0x2e,0x30,0x35,0x37,0x32,0x39,0x31,0x37,0x20,0x34,0x2e,0x34,0x37
,0x35,0x32,0x36,0x20,0x30,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39,0x20,0x30,0x20
,0x34,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22
,0x20,0x66,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30
,0x2e,0x35,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67
,0x3e,0xd,0xa};

const uint8_t slint_embedded_resource_2[818] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x36,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x38,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x36,0x20,0x38,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa,0x3c,0x70,0x61,0x74
,0x68,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x4c
,0x30,0x20,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x37,0x43,0x30,0x20,0x30,0x2e,0x38
,0x35,0x34,0x31,0x36,0x37,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20
,0x30,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35
,0x20,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x43,0x30,0x2e,0x31,0x33,0x32,0x38
,0x31,0x32,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x32,0x30
,0x34,0x34,0x32,0x37,0x20,0x30,0x2e,0x33,0x38,0x31,0x35,0x31,0x20,0x30,0x2e,0x32
,0x39,0x32,0x39,0x36,0x39,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x43,0x30
,0x2e,0x33,0x38,0x34,0x31,0x31,0x35,0x20,0x30,0x2e,0x32,0x30,0x31,0x38,0x32,0x33
,0x20,0x30,0x2e,0x34,0x38,0x39,0x35,0x38,0x33,0x20,0x30,0x2e,0x31,0x33,0x30,0x32
,0x30,0x38,0x20,0x30,0x2e,0x36,0x30,0x39,0x33,0x37,0x35,0x20,0x30,0x2e,0x30,0x37
,0x38,0x31,0x32,0x35,0x43,0x30,0x2e,0x37,0x33,0x31,0x37,0x37,0x31,0x20,0x30,0x2e
,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x30,0x2e,0x38,0x36,0x31,0x39,0x37,0x39
,0x20,0x30,0x20,0x31,0x20,0x30,0x43,0x31,0x2e,0x32,0x30,0x35,0x37,0x33,0x20,0x30
,0x20,0x31,0x2e,0x33,0x39,0x35,0x38,0x33,0x20,0x30,0x2e,0x30,0x35,0x39,0x38,0x39
,0x35,0x38,0x20,0x31,0x2e,0x35,0x37,0x30,0x33,0x31,0x20,0x30,0x2e,0x31,0x37,0x39
,0x36,0x38,0x37,0x4c,0x35,0x2e,0x33,0x35,0x35,0x34,0x37,0x20,0x32,0x2e,0x37,0x38
,0x31,0x32,0x35,0x43,0x35,0x2e,0x35,0x35,0x38,0x35,0x39,0x20,0x32,0x2e,0x39,0x32
,0x31,0x38,0x37,0x20,0x35,0x2e,0x37,0x31,0x36,0x31,0x35,0x20,0x33,0x2e,0x30,0x39
,0x38,0x39,0x36,0x20,0x35,0x2e,0x38,0x32,0x38,0x31,0x33,0x20,0x33,0x2e,0x33,0x31
,0x32,0x35,0x43,0x35,0x2e,0x39,0x34,0x32,0x37,0x31,0x20,0x33,0x2e,0x35,0x32,0x36
,0x30,0x34,0x20,0x36,0x20,0x33,0x2e,0x37,0x35,0x35,0x32,0x31,0x20,0x36,0x20,0x34
,0x43,0x36,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39,0x20,0x35,0x2e,0x39,0x34,0x32
,0x37,0x31,0x20,0x34,0x2e,0x34,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x38,0x32,0x38
,0x31,0x33,0x20,0x34,0x2e,0x36,0x38,0x37,0x35,0x43,0x35,0x2e,0x37,0x31,0x36,0x31
,0x35,0x20,0x34,0x2e,0x39,0x30,0x31,0x30,0x34,0x20,0x35,0x2e,0x35,0x35,0x38,0x35
,0x39,0x20,0x35,0x2e,0x30,0x37,0x38,0x31,0x32,0x20,0x35,0x2e,0x33,0x35,0x35,0x34
,0x37,0x20,0x35,0x2e,0x32,0x31,0x38,0x37,0x35,0x4c,0x31,0x2e,0x35,0x37,0x30,0x33
,0x31,0x20,0x37,0x2e,0x38,0x32,0x30,0x33,0x31,0x43,0x31,0x2e,0x33,0x39,0x35,0x38
,0x33,0x20,0x37,0x2e,0x39,0x34,0x30,0x31,0x20,0x31,0x2e,0x32,0x30,0x35,0x37,0x33
,0x20,0x38,0x20,0x31,0x20,0x38,0x43,0x30,0x2e,0x38,0x36,0x31,0x39,0x37,0x39,0x20
,0x38,0x20,0x30,0x2e,0x37,0x33,0x31,0x37,0x37,0x31,0x20,0x37,0x2e,0x39,0x37,0x33
,0x39,0x36,0x20,0x30,0x2e,0x36,0x30,0x39,0x33,0x37,0x35,0x20,0x37,0x2e,0x39,0x32
,0x31,0x38,0x38,0x43,0x30,0x2e,0x34,0x38,0x39,0x35,0x38,0x33,0x20,0x37,0x2e,0x38
,0x36,0x39,0x37,0x39,0x20,0x30,0x2e,0x33,0x38,0x34,0x31,0x31,0x35,0x20,0x37,0x2e
,0x37,0x39,0x39,0x34,0x38,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x20,0x37
,0x2e,0x37,0x31,0x30,0x39,0x34,0x43,0x30,0x2e,0x32,0x30,0x34,0x34,0x32,0x37,0x20
,0x37,0x2e,0x36,0x31,0x39,0x37,0x39,0x20,0x30,0x2e,0x31,0x33,0x32,0x38,0x31,0x33
,0x20,0x37,0x2e,0x35,0x31,0x34,0x33,0x32,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32
,0x35,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x43,0x30,0x2e,0x30,0x32,0x36,0x30
,0x34,0x31,0x37,0x20,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x30,0x20,0x37,0x2e
,0x31,0x34,0x35,0x38,0x33,0x20,0x30,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x5a
,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22,0x20,0x66
,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30,0x2e,0x35
,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xd
,0xa};

const uint8_t slint_embedded_resource_3[1138] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x38,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x36,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x38,0x20,0x36,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa,0x3c,0x70,0x61,0x74
,0x68,0x20,0x64,0x3d,0x22,0x4d,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x20,0x36
,0x43,0x30,0x2e,0x38,0x35,0x34,0x31,0x36,0x37,0x20,0x36,0x20,0x30,0x2e,0x37,0x32
,0x35,0x32,0x36,0x20,0x35,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x30,0x2e,0x36,0x30
,0x35,0x34,0x36,0x39,0x20,0x35,0x2e,0x39,0x32,0x31,0x38,0x38,0x43,0x30,0x2e,0x34
,0x38,0x35,0x36,0x37,0x37,0x20,0x35,0x2e,0x38,0x36,0x37,0x31,0x39,0x20,0x30,0x2e
,0x33,0x38,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x37,0x39,0x35,0x35,0x37,0x20,0x30
,0x2e,0x32,0x38,0x39,0x30,0x36,0x32,0x20,0x35,0x2e,0x37,0x30,0x37,0x30,0x33,0x43
,0x30,0x2e,0x32,0x30,0x30,0x35,0x32,0x31,0x20,0x35,0x2e,0x36,0x31,0x35,0x38,0x39
,0x20,0x30,0x2e,0x31,0x33,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x35,0x31,0x30,0x34
,0x32,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x20,0x35,0x2e,0x33,0x39,0x30
,0x36,0x32,0x43,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x35,0x2e,0x32
,0x36,0x38,0x32,0x33,0x20,0x30,0x20,0x35,0x2e,0x31,0x33,0x38,0x30,0x32,0x20,0x30
,0x20,0x35,0x43,0x30,0x20,0x34,0x2e,0x38,0x39,0x30,0x36,0x32,0x20,0x30,0x2e,0x30
,0x31,0x34,0x33,0x32,0x32,0x39,0x20,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x30
,0x2e,0x30,0x34,0x32,0x39,0x36,0x38,0x38,0x20,0x34,0x2e,0x36,0x39,0x39,0x32,0x32
,0x43,0x30,0x2e,0x30,0x37,0x34,0x32,0x31,0x38,0x38,0x20,0x34,0x2e,0x36,0x30,0x38
,0x30,0x37,0x20,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x34,0x2e,0x35,0x31
,0x38,0x32,0x33,0x20,0x30,0x2e,0x31,0x37,0x39,0x36,0x38,0x38,0x20,0x34,0x2e,0x34
,0x32,0x39,0x36,0x39,0x4c,0x32,0x2e,0x37,0x38,0x31,0x32,0x35,0x20,0x30,0x2e,0x36
,0x34,0x34,0x35,0x33,0x31,0x43,0x32,0x2e,0x38,0x34,0x38,0x39,0x36,0x20,0x30,0x2e
,0x35,0x34,0x35,0x35,0x37,0x33,0x20,0x32,0x2e,0x39,0x32,0x38,0x33,0x39,0x20,0x30
,0x2e,0x34,0x35,0x38,0x33,0x33,0x33,0x20,0x33,0x2e,0x30,0x31,0x39,0x35,0x33,0x20
,0x30,0x2e,0x33,0x38,0x32,0x38,0x31,0x32,0x43,0x33,0x2e,0x31,0x31,0x30,0x36,0x38
,0x20,0x30,0x2e,0x33,0x30,0x37,0x32,0x39,0x32,0x20,0x33,0x2e,0x32,0x30,0x38,0x33
,0x33,0x20,0x30,0x2e,0x32,0x34,0x34,0x37,0x39,0x32,0x20,0x33,0x2e,0x33,0x31,0x32
,0x35,0x20,0x30,0x2e,0x31,0x39,0x35,0x33,0x31,0x32,0x43,0x33,0x2e,0x34,0x31,0x39
,0x32,0x37,0x20,0x30,0x2e,0x31,0x34,0x33,0x32,0x32,0x39,0x20,0x33,0x2e,0x35,0x33
,0x31,0x32,0x35,0x20,0x30,0x2e,0x31,0x30,0x34,0x31,0x36,0x37,0x20,0x33,0x2e,0x36
,0x34,0x38,0x34,0x34,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x43,0x33,0x2e
,0x37,0x36,0x35,0x36,0x32,0x20,0x30,0x2e,0x30,0x35,0x32,0x30,0x38,0x33,0x33,0x20
,0x33,0x2e,0x38,0x38,0x32,0x38,0x31,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32
,0x35,0x20,0x34,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32,0x35,0x43,0x34,0x2e
,0x31,0x31,0x37,0x31,0x39,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32,0x35,0x20
,0x34,0x2e,0x32,0x33,0x34,0x33,0x38,0x20,0x30,0x2e,0x30,0x35,0x32,0x30,0x38,0x33
,0x33,0x20,0x34,0x2e,0x33,0x35,0x31,0x35,0x36,0x20,0x30,0x2e,0x30,0x37,0x38,0x31
,0x32,0x35,0x43,0x34,0x2e,0x34,0x36,0x38,0x37,0x35,0x20,0x30,0x2e,0x31,0x30,0x34
,0x31,0x36,0x37,0x20,0x34,0x2e,0x35,0x37,0x39,0x34,0x33,0x20,0x30,0x2e,0x31,0x34
,0x33,0x32,0x32,0x39,0x20,0x34,0x2e,0x36,0x38,0x33,0x35,0x39,0x20,0x30,0x2e,0x31
,0x39,0x35,0x33,0x31,0x32,0x43,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x30,0x2e
,0x32,0x34,0x34,0x37,0x39,0x32,0x20,0x34,0x2e,0x38,0x38,0x39,0x33,0x32,0x20,0x30
,0x2e,0x33,0x30,0x37,0x32,0x39,0x32,0x20,0x34,0x2e,0x39,0x38,0x30,0x34,0x37,0x20
,0x30,0x2e,0x33,0x38,0x32,0x38,0x31,0x32,0x43,0x35,0x2e,0x30,0x37,0x31,0x36,0x31
,0x20,0x30,0x2e,0x34,0x35,0x38,0x33,0x33,0x33,0x20,0x35,0x2e,0x31,0x35,0x31,0x30
,0x34,0x20,0x30,0x2e,0x35,0x34,0x35,0x35,0x37,0x33,0x20,0x35,0x2e,0x32,0x31,0x38
,0x37,0x35,0x20,0x30,0x2e,0x36,0x34,0x34,0x35,0x33,0x31,0x4c,0x37,0x2e,0x38,0x32
,0x30,0x33,0x31,0x20,0x34,0x2e,0x34,0x32,0x39,0x36,0x39,0x43,0x37,0x2e,0x38,0x38
,0x30,0x32,0x31,0x20,0x34,0x2e,0x35,0x31,0x38,0x32,0x33,0x20,0x37,0x2e,0x39,0x32
,0x34,0x34,0x38,0x20,0x34,0x2e,0x36,0x30,0x38,0x30,0x37,0x20,0x37,0x2e,0x39,0x35
,0x33,0x31,0x32,0x20,0x34,0x2e,0x36,0x39,0x39,0x32,0x32,0x43,0x37,0x2e,0x39,0x38
,0x34,0x33,0x38,0x20,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x38,0x20,0x34,0x2e
,0x38,0x39,0x30,0x36,0x32,0x20,0x38,0x20,0x35,0x43,0x38,0x20,0x35,0x2e,0x31,0x33
,0x38,0x30,0x32,0x20,0x37,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x32,0x36
,0x38,0x32,0x33,0x20,0x37,0x2e,0x39,0x32,0x31,0x38,0x38,0x20,0x35,0x2e,0x33,0x39
,0x30,0x36,0x32,0x43,0x37,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x35,0x2e,0x35,0x31
,0x30,0x34,0x32,0x20,0x37,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x35,0x2e,0x36,0x31
,0x35,0x38,0x39,0x20,0x37,0x2e,0x37,0x31,0x30,0x39,0x34,0x20,0x35,0x2e,0x37,0x30
,0x37,0x30,0x33,0x43,0x37,0x2e,0x36,0x32,0x32,0x34,0x20,0x35,0x2e,0x37,0x39,0x35
,0x35,0x37,0x20,0x37,0x2e,0x35,0x31,0x36,0x39,0x33,0x20,0x35,0x2e,0x38,0x36,0x37
,0x31,0x39,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x20,0x35,0x2e,0x39,0x32,0x31
,0x38,0x38,0x43,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x37,0x33
,0x39,0x36,0x20,0x37,0x2e,0x31,0x34,0x37,0x31,0x34,0x20,0x36,0x20,0x37,0x2e,0x30
,0x31,0x31,0x37,0x32,0x20,0x36,0x48,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x5a
,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22,0x20,0x66
,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30,0x2e,0x35
,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xd
,0xa};

inline auto ComboBoxBase_root_1::fn_clear_focus () const -> void{
    [[maybe_unused]] auto self = this;
    self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1, false, slint::cbindgen_private::FocusReason::Programmatic);;
}

inline auto ComboBoxBase_root_1::fn_focus () const -> void{
    [[maybe_unused]] auto self = this;
    self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;
}

inline auto ComboBoxBase_root_1::fn_move_selection_down () const -> void{
    [[maybe_unused]] auto self = this;
    self->fn_select(static_cast<int>(std::min<float>((self->root_1_current_index.get() + 1), (slint::private_api::model_length(self->root_1_model.get()) -(float) 1))));
}

inline auto ComboBoxBase_root_1::fn_move_selection_up () const -> void{
    [[maybe_unused]] auto self = this;
    self->fn_select(static_cast<int>(std::max<float>((self->root_1_current_index.get() -(float) 1), 0)));
}

inline auto ComboBoxBase_root_1::fn_popup_key_handler (slint::private_api::KeyEvent arg_0) const -> slint::cbindgen_private::EventResult{
    [[maybe_unused]] auto self = this;
    return [&]{ [[maybe_unused]] auto returned_expression0 = [&]{ [[maybe_unused]] auto return_check_merge0 = [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (arg_0.text == slint::SharedString(u8"\U0000f700")) { return std::make_tuple(false, [&]{ self->fn_move_selection_up();return slint::cbindgen_private::EventResult::Accept; }()); } else { return [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (arg_0.text == slint::SharedString(u8"\U0000f701")) { return std::make_tuple(false, [&]{ self->fn_move_selection_down();return slint::cbindgen_private::EventResult::Accept; }()); } else { return [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (! ((arg_0.text == slint::SharedString(u8"\n")) || (arg_0.text == slint::SharedString(u8"\U0000001b")))) { return std::make_tuple(true, slint::cbindgen_private::EventResult::Reject); } else { return std::make_tuple(false, [&]{ self->root_1_close_popup.call();return slint::cbindgen_private::EventResult::Accept; }()); }}(); }}(); }}();;return [&]() -> std::tuple<slint::cbindgen_private::EventResult, bool, slint::cbindgen_private::EventResult> { if (std::get<0>(return_check_merge0)) { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, slint::cbindgen_private::EventResult::Reject); } else { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge0)); }}(); }();;return [&]() -> slint::cbindgen_private::EventResult { if (std::get<1>(returned_expression0)) { return std::get<0>(returned_expression0); } else { return std::get<2>(returned_expression0); }}(); }();
}

inline auto ComboBoxBase_root_1::fn_reset_current () const -> void{
    [[maybe_unused]] auto self = this;
    self->root_1_current_index.set(static_cast<int>(0));
}

inline auto ComboBoxBase_root_1::fn_select (int arg_0) const -> void{
    [[maybe_unused]] auto self = this;
    [&]() -> void { if (! (! self->i_focus_scope_2.enabled.get())) { [&]{ self->root_1_current_index.set(arg_0);[&]() -> void { if (self->root_1_current_value.get() != slint::private_api::access_array_index(self->root_1_model.get(), self->root_1_current_index.get())) { self->fn_update_current_value(); } else { ; }}();self->root_1_selected.call(self->root_1_current_value.get()); }(); } else { ; }}();
}

inline auto ComboBoxBase_root_1::fn_update_current_value () const -> void{
    [[maybe_unused]] auto self = this;
    [&]{ [[maybe_unused]] auto tmp_root_1_current_index = self->root_1_current_index.get();;[&]() -> void { if (! ((self->root_1_current_index.get() < 0) || (tmp_root_1_current_index >= slint::private_api::model_length(self->root_1_model.get())))) { self->root_1_current_value.set(slint::private_api::access_array_index(self->root_1_model.get(), self->root_1_current_index.get())); } else { self->root_1_current_value.set(slint::SharedString(u8"")); }}(); }();
}

inline auto ComboBoxBase_root_1::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_1_current_index.set(static_cast<int>(0));
    self->root_1_current_value.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::access_array_index(self->root_1_model.get(), self->root_1_current_index.get());
                        });
    self->root_1_has_focus.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->i_focus_scope_2.has_focus.get() || self->root_1_popup_has_focus.get()) && self->i_focus_scope_2.enabled.get());
                        });
    self->i_focus_scope_2.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->i_focus_scope_2.focus_on_click.set(true);
    self->i_focus_scope_2.focus_on_tab_navigation.set(true);
    self->i_focus_scope_2.key_pressed.set_handler(
                    [this]([[maybe_unused]] slint::private_api::KeyEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return [&]() -> slint::cbindgen_private::EventResult { if (! (! self->i_focus_scope_2.enabled.get())) { return [&]{ [[maybe_unused]] auto returned_expression1 = [&]{ [[maybe_unused]] auto return_check_merge1 = [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (arg_0.text == slint::SharedString(u8"\U0000f700")) { return std::make_tuple(false, [&]{ self->fn_move_selection_up();return slint::cbindgen_private::EventResult::Accept; }()); } else { return [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (! (arg_0.text == slint::SharedString(u8"\U0000f701"))) { return [&]{ [&]() -> void { if (arg_0.text == slint::SharedString(u8"\n")) { self->root_1_show_popup.call(); } else { ; }}();return std::make_tuple(true, slint::cbindgen_private::EventResult::Reject); }(); } else { return std::make_tuple(false, [&]{ self->fn_move_selection_down();return slint::cbindgen_private::EventResult::Accept; }()); }}(); }}();;return [&]() -> std::tuple<slint::cbindgen_private::EventResult, bool, slint::cbindgen_private::EventResult> { if (std::get<0>(return_check_merge1)) { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, slint::cbindgen_private::EventResult::Reject); } else { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge1)); }}(); }();;return [&]() -> slint::cbindgen_private::EventResult { if (std::get<1>(returned_expression1)) { return std::get<0>(returned_expression1); } else { return std::get<2>(returned_expression1); }}(); }(); } else { return slint::cbindgen_private::EventResult::Reject; }}();
                    });
    self->i_touch_area_3.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]{ self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;self->root_1_show_popup.call(); }();
                    });
    self->i_touch_area_3.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->i_focus_scope_2.enabled.get();
                        });
    self->i_touch_area_3.scroll_event.set_handler(
                    [this]([[maybe_unused]] slint::private_api::PointerScrollEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return [&]() -> slint::cbindgen_private::EventResult { if (! (! self->root_1_has_focus.get())) { return [&]() -> slint::cbindgen_private::EventResult { if (! (arg_0.delta_y < (- 2))) { return [&]() -> slint::cbindgen_private::EventResult { if (! (arg_0.delta_y > 2)) { return slint::cbindgen_private::EventResult::Reject; } else { return [&]{ self->fn_move_selection_up();return slint::cbindgen_private::EventResult::Accept; }(); }}(); } else { return [&]{ self->fn_move_selection_down();return slint::cbindgen_private::EventResult::Accept; }(); }}(); } else { return slint::cbindgen_private::EventResult::Reject; }}();
                    });
    self->i_focus_scope_2.focus_on_click.set_constant();
    self->i_focus_scope_2.focus_on_tab_navigation.set_constant();
    self->i_touch_area_3.mouse_cursor.set_constant();
}

inline auto ComboBoxBase_root_1::user_init () -> void{
    [[maybe_unused]] auto self = this;
    self->change_tracker0.init(self, [](auto self) { return self->root_1_current_index.get(); }, []([[maybe_unused]] auto self, auto) { self->fn_update_current_value(); });
    self->change_tracker1.init(self, [](auto self) { return self->root_1_model.get(); }, []([[maybe_unused]] auto self, auto) { self->fn_reset_current(); });
    self->change_tracker2.init(self, [](auto self) { return self->i_focus_scope_2.has_focus.get(); }, []([[maybe_unused]] auto self, auto) { [&]() -> void { if (self->i_focus_scope_2.has_focus.get()) { self->root_1_popup_has_focus.set(false); } else { ; }}(); });
}

inline auto ComboBoxBase_root_1::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->root_1), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->root_1), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto ComboBoxBase_root_1::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_1_height.get()), float(self->root_1_width.get()), float(0), float(0)));
    }
    return {};
}

inline auto ComboBoxBase_root_1::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto ComboBoxBase_root_1::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto ComboBoxBase_root_1::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto ComboBoxBase_root_1::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto ComboBoxBase_root_1::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_4::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->root_4.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}());
                        });
    self->root_4.border_width.set(2);
    self->rectangle_5.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.003121664e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}());
                        });
    self->rectangle_5.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->root_4.border_radius.get() -(float) 2);
                        });
    self->rectangle_5.border_width.set(1);
    self->root_4.background.set_constant();
    self->root_4.border_width.set_constant();
    self->rectangle_5.background.set_constant();
    self->rectangle_5.border_width.set_constant();
}

inline auto FocusBorder_root_4::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto FocusBorder_root_4::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->root_4), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->root_4), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto FocusBorder_root_4::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_4_height.get()), float(self->root_4_width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->root_4_height.get() -(float) 4)), float((self->root_4_width.get() -(float) 4)), float(2), float(2)));
    }
    return {};
}

inline auto FocusBorder_root_4::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_4::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto FocusBorder_root_4::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto FocusBorder_root_4::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_4::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline const slint::private_api::ItemTreeVTable Component_focusborder_24::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_focusborder_24>, slint::private_api::dealloc };

inline auto Component_focusborder_24::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_23 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_empty_23>(parent->self_weak.lock().value(), parent);
    this->focusborder_24.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->focusborder_24.root_4.border_radius.set(4);
    self->focusborder_24.root_4_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->empty_23_height.get();
                        });
    self->focusborder_24.root_4_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->parent.lock().value()->flickable_20.viewport_width.get() -(float) 4) -(float) 4);
                        });
    self->focusborder_24.root_4.background.set_constant();
    self->focusborder_24.root_4.border_radius.set_constant();
    self->focusborder_24.root_4.border_width.set_constant();
}

inline auto Component_focusborder_24::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->focusborder_24.user_init();
}

inline auto Component_focusborder_24::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_24.root_4), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->focusborder_24.self_weak.lock()->into_dyn(), self->focusborder_24.tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_24.root_4), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->focusborder_24.self_weak.lock()->into_dyn(), self->focusborder_24.tree_index);
}

inline auto Component_focusborder_24::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->empty_23_height.get()), float(((self->parent.lock().value()->parent.lock().value()->flickable_20.viewport_width.get() -(float) 4) -(float) 4)), float(0), float(0)));
    }
    if (index == 0) {
        return self->focusborder_24.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_24.item_geometry(index - 0);
    } else return {};
}

inline auto Component_focusborder_24::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_24.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_24.accessible_role(index - 0);
    } else return {};
}

inline auto Component_focusborder_24::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->focusborder_24.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_24.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_focusborder_24::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->focusborder_24.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_24.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_focusborder_24::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_24.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_24.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_focusborder_24::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_24.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_24.element_infos(index - 0);
    } else return {};
}

inline auto Component_focusborder_24::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_focusborder_24*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_focusborder_24*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_focusborder_24::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_focusborder_24::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_focusborder_24::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_focusborder_24::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_focusborder_24::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_focusborder_24*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 0 };
}

inline auto Component_focusborder_24::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_focusborder_24::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_focusborder_24::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_focusborder_24::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_24, focusborder_24) +  offsetof(FocusBorder_root_4, root_4) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_24, focusborder_24) +  offsetof(FocusBorder_root_4, rectangle_5) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_focusborder_24::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_focusborder_24*>(component.instance)->layout_info(o);
}

inline auto Component_focusborder_24::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_focusborder_24*>(component.instance)->item_geometry(index);
}

inline auto Component_focusborder_24::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_focusborder_24*>(component.instance)->accessible_role(index);
}

inline auto Component_focusborder_24::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_focusborder_24*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_focusborder_24::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_focusborder_24*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_focusborder_24::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_focusborder_24*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_focusborder_24::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_focusborder_24::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_focusborder_24*>(component.instance)->globals->window().window_handle();
}

inline auto Component_focusborder_24::create (class Component_empty_23 const * parent) -> slint::ComponentHandle<Component_focusborder_24>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_24>::make();
    auto self = const_cast<Component_focusborder_24 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_focusborder_24>{ self_rc };
}

inline Component_focusborder_24::~Component_focusborder_24 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_focusborder_24::init () -> void{
    user_init();
}

inline auto Component_focusborder_24::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_empty_23::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_empty_23>, slint::private_api::dealloc };

inline auto Component_empty_23::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_popup_14 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_popup_14>(parent->self_weak.lock().value(), parent);
    self->empty_23_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::layout_cache_access(self->parent.lock().value()->popup_14_empty_22_layout_cache.get(), 1, self->model_index.get());
                        });
    self->empty_23_i_background_26_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (((self->parent.lock().value()->flickable_20.viewport_width.get() -(float) 4) -(float) 4) -(float) 6);
                        });
    self->empty_23_i_background_26_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((((self->parent.lock().value()->flickable_20.viewport_width.get() -(float) 4) -(float) 4) -(float) (((self->parent.lock().value()->flickable_20.viewport_width.get() -(float) 4) -(float) 4) -(float) 6)) /(float) 2);
                        });
    self->empty_23_i_background_26_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->empty_23_height.get() -(float) (self->empty_23_height.get() -(float) 4)) /(float) 2);
                        });
    self->empty_23_i_layout_27_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 1>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->i_text_28), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ) }.data(), 1), [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16), self->empty_23_i_background_26_width.get(), 4),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->empty_23_i_layout_27_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 1>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->i_text_28), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ) }.data(), 1),4,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->empty_23_i_layout_27_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 1>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->i_text_28), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ) }.data(), 1),[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->empty_23_i_selector_29_height.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_empty_23_state = self->empty_23_state.get();;return [&]() -> float { if (std::abs(float(tmp_empty_23_state - 2)) < std::numeric_limits<float>::epsilon()) { return [&]() -> float { if (self->empty_23_is_selected.get()) { return 16; } else { return 0; }}(); } else { return [&]() -> float { if (std::abs(float(tmp_empty_23_state - 3)) < std::numeric_limits<float>::epsilon()) { return 16; } else { return 0; }}(); }}(); }();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->empty_23_i_selector_29_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (((self->empty_23_height.get() -(float) 4) -(float) self->empty_23_i_selector_29_height.get()) /(float) 2);
                        });
    self->empty_23_is_selected.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->model_index.get() - self->parent.lock().value()->parent.lock().value()->base_7.root_1_current_index.get())) < std::numeric_limits<float>::epsilon());
                        });
    self->empty_23_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->touch_area_30.pressed.get()) { return 1; } else { return [&]() -> float { if (self->touch_area_30.has_hover.get()) { return 2; } else { return [&]() -> float { if (self->empty_23_is_selected.get()) { return 3; } else { return 0; }}(); }}(); }}();
                        });
    self->empty_23_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::layout_cache_access(self->parent.lock().value()->popup_14_empty_22_layout_cache.get(), 0, self->model_index.get());
                        });
    self->i_background_26.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_empty_23_state = self->empty_23_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_empty_23_state - 1)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->empty_23_is_selected.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(268435455); } else { return slint::Color::from_argb_encoded(167772160); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(184549375); } else { return slint::Color::from_argb_encoded(83886080); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_empty_23_state - 2)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->empty_23_is_selected.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(184549375); } else { return slint::Color::from_argb_encoded(83886080); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(268435455); } else { return slint::Color::from_argb_encoded(167772160); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_empty_23_state - 3)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(268435455); } else { return slint::Color::from_argb_encoded(167772160); }}()); } else { return slint::Brush(slint::Color::from_argb_encoded(0)); }}(); }}(); }}(); }();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->i_background_26.border_radius.set(4);
    self->i_text_28.color.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->empty_23_state.get() - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}()); }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(), 1));
    self->i_text_28.font_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1.0766 * slint::private_api::get_resolved_default_font_size(*this));
                        });
    self->i_text_28.font_weight.set(static_cast<int>(400));
    self->i_text_28.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->empty_23_height.get() -(float) 4);
                        });
    self->i_text_28.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Left);
    self->i_text_28.overflow.set(slint::cbindgen_private::TextOverflow::Elide);
    self->i_text_28.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&](const auto &a_0){ slint::StandardListViewItem o{}; o.text = a_0; return o; }(self->model_data.get()).text;
                        });
    self->i_text_28.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->i_text_28.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->empty_23_i_layout_27_layout_cache.get()[1];
                        });
    self->i_selector_29.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.284534271e9); } else { return slint::Color::from_argb_encoded(+4.278214584e9); }}());
                        });
    self->i_selector_29.border_radius.set(2);
    self->touch_area_30.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->parent.lock().value()->parent.lock().value()->base_7.fn_select(self->model_index.get());
                    });
    self->touch_area_30.enabled.set(true);
    self->i_background_26.border_color.set_constant();
    self->i_background_26.border_radius.set_constant();
    self->i_background_26.border_width.set_constant();
    self->i_text_28.font_family.set_constant();
    self->i_text_28.font_italic.set_constant();
    self->i_text_28.font_weight.set_constant();
    self->i_text_28.horizontal_alignment.set_constant();
    self->i_text_28.letter_spacing.set_constant();
    self->i_text_28.overflow.set_constant();
    self->i_text_28.stroke.set_constant();
    self->i_text_28.stroke_style.set_constant();
    self->i_text_28.stroke_width.set_constant();
    self->i_text_28.vertical_alignment.set_constant();
    self->i_text_28.wrap.set_constant();
    self->i_selector_29.border_color.set_constant();
    self->i_selector_29.border_radius.set_constant();
    self->i_selector_29.border_width.set_constant();
    self->touch_area_30.enabled.set_constant();
    self->touch_area_30.mouse_cursor.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return false; });
}

inline auto Component_empty_23::user_init () -> void{
    [[maybe_unused]] auto self = this;
    ;
}

inline auto Component_empty_23::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->empty_23_i_layout_27_layoutinfo_h.get()));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->empty_23_i_layout_27_layoutinfo_h.get().min, layout_info.min_percent, layout_info.preferred, 1); }() : [&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->empty_23_i_layout_27_layoutinfo_v.get()));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(40, self->empty_23_i_layout_27_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }();
}

inline auto Component_empty_23::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->empty_23_height.get()), float(((self->parent.lock().value()->flickable_20.viewport_width.get() -(float) 4) -(float) 4)), float(4), float(self->empty_23_y.get())));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->empty_23_height.get() -(float) 4)), float((((self->parent.lock().value()->flickable_20.viewport_width.get() -(float) 4) -(float) 4) -(float) 6)), float(self->empty_23_i_background_26_x.get()), float(self->empty_23_i_background_26_y.get())));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->empty_23_height.get()), float(((self->parent.lock().value()->flickable_20.viewport_width.get() -(float) 4) -(float) 4)), float(0), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->empty_23_height.get() -(float) 4)), float(self->empty_23_i_layout_27_layout_cache.get()[1]), float(self->empty_23_i_layout_27_layout_cache.get()[0]), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->empty_23_i_selector_29_height.get()), float(3), float(0), float(self->empty_23_i_selector_29_y.get())));
    }
    return {};
}

inline auto Component_empty_23::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::ListItem;
    }
    return {};
}

inline auto Component_empty_23::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ItemIndex): return slint::SharedString::from_number(static_cast<int>(0));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ItemSelectable): return [&]() -> slint::SharedString { if (true) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ItemSelected): return [&]() -> slint::SharedString { if (self->empty_23_is_selected.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return [&](const auto &a_0){ slint::StandardListViewItem o{}; o.text = a_0; return o; }(self->model_data.get()).text;
    }
    return {};
}

inline auto Component_empty_23::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_empty_23::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_empty_23::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_empty_23::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            } };
        std::abort();
}

inline auto Component_empty_23::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            } };
        std::abort();
}

inline auto Component_empty_23::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto Component_empty_23::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_empty_23*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Component_empty_23*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_empty_23::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_empty_23::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Component_empty_23*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Component_empty_23::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Component_empty_23*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Component_empty_23::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_empty_23::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_empty_23*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 8 };
}

inline auto Component_empty_23::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_empty_23::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    auto self = reinterpret_cast<const Component_empty_23*>(component.instance);
    return self->model_index.get();
}

inline auto Component_empty_23::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(3, 1, 0, 0, true), 
slint::private_api::make_dyn_node(0, 0), 
slint::private_api::make_item_node(2, 4, 0, 1, false), 
slint::private_api::make_item_node(0, 6, 0, 2, false), 
slint::private_api::make_item_node(0, 6, 2, 3, false), 
slint::private_api::make_item_node(0, 6, 2, 4, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_empty_23::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_empty_23, empty_23) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_empty_23, i_background_26) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_empty_23, touch_area_30) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(Component_empty_23, i_text_28) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_empty_23, i_selector_29) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_empty_23::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_empty_23*>(component.instance)->layout_info(o);
}

inline auto Component_empty_23::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_empty_23*>(component.instance)->item_geometry(index);
}

inline auto Component_empty_23::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_empty_23*>(component.instance)->accessible_role(index);
}

inline auto Component_empty_23::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_empty_23*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_empty_23::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_empty_23*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_empty_23::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_empty_23*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_empty_23::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_empty_23::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_empty_23*>(component.instance)->globals->window().window_handle();
}

inline auto Component_empty_23::create (class Component_popup_14 const * parent) -> slint::ComponentHandle<Component_empty_23>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_23>::make();
    auto self = const_cast<Component_empty_23 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_empty_23>{ self_rc };
}

inline Component_empty_23::~Component_empty_23 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_empty_23::update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::SharedString &data) const -> void{
    [[maybe_unused]] auto self = this;
    self->model_index.set(i);
    self->model_data.set(data);
}

inline auto Component_empty_23::init () -> void{
    user_init();
}

inline auto Component_empty_23::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_popup_14::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_popup_14>, slint::private_api::dealloc };

inline auto Component_popup_14::fn_focus () const -> void{
    [[maybe_unused]] auto self = this;
    self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;
}

inline auto Component_popup_14::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ComboBox_root_6 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const ComboBox_root_6>(parent->self_weak.lock().value(), parent);
    self->popup_14_down_scroll_button_42_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->down_scroll_button_42.pressed.get()) { return 1; } else { return [&]() -> float { if (self->down_scroll_button_42.has_hover.get()) { return 2; } else { return 0; }}(); }}();
                        });
    self->popup_14_down_scroll_button_55_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->down_scroll_button_55.pressed.get()) { return 1; } else { return [&]() -> float { if (self->down_scroll_button_55.has_hover.get()) { return 2; } else { return 0; }}(); }}();
                        });
    self->popup_14_empty_19_horizontal_scrollbar_policy.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::cbindgen_private::ScrollBarPolicy::AsNeeded;
                        });
    self->popup_14_empty_19_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_2 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_2.max, layout_info_2.max_percent, 50, layout_info_2.min_percent, layout_info_2.preferred, 1); }() + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->popup_14_flickable_20_max_width.get(), 100, self->popup_14_flickable_20_min_width.get(), 0, self->popup_14_flickable_20_preferred_width.get(), self->popup_14_flickable_20_horizontal_stretch.get()));
                        });
    self->popup_14_empty_19_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_3 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_3.max, layout_info_3.max_percent, 50, layout_info_3.min_percent, layout_info_3.preferred, 1); }() + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->popup_14_flickable_20_max_height.get(), 100, self->popup_14_flickable_20_min_height.get(), 0, self->popup_14_flickable_20_preferred_height.get(), self->popup_14_flickable_20_vertical_stretch.get()));
                        });
    self->popup_14_empty_19_vertical_scrollbar_policy.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::cbindgen_private::ScrollBarPolicy::AsNeeded;
                        });
    self->popup_14_empty_19_visible_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->popup_14_inner_fs_15_height.get();
                        });
    self->popup_14_empty_19_visible_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->popup_14_rectangle_17_width.get();
                        });
    self->popup_14_empty_22_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Start, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(4, 4), self->flickable_20.viewport_height.get(), 0),repeated_indices); }();
                        });
    self->popup_14_empty_22_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(4, 4)); }();
                        });
    self->popup_14_empty_22_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(4, 4),slint::cbindgen_private::LayoutAlignment::Start); }();
                        });
    self->popup_14_flickable_20_horizontal_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->flickable_20), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).stretch;
                        });
    self->popup_14_flickable_20_max_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->flickable_20), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).max;
                        });
    self->popup_14_flickable_20_max_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->flickable_20), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).max;
                        });
    self->popup_14_flickable_20_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->flickable_20), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).min;
                        });
    self->popup_14_flickable_20_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->flickable_20), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).min;
                        });
    self->popup_14_flickable_20_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->flickable_20), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).preferred;
                        });
    self->popup_14_flickable_20_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->flickable_20), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).preferred;
                        });
    self->popup_14_flickable_20_vertical_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->flickable_20), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 5 - 1).stretch;
                        });
    self->popup_14.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((static_cast<int>(std::min<float>(6, slint::private_api::model_length(self->parent.lock().value()->base_7.root_1_model.get()))) * 40) + 8);
                        });
    self->popup_14_horizontal_bar_46_maximum.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->flickable_20.viewport_width.get() -(float) self->popup_14_empty_19_visible_width.get());
                        });
    self->popup_14_horizontal_bar_46_scrolled.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->flickable_20.flicked.call();
                    });
    self->popup_14_horizontal_bar_46_size.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_horizontal_bar_46_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 6; } else { return 2; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->popup_14_horizontal_bar_46_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if ((self->touch_area_49.has_hover.get() || self->down_scroll_button_55.has_hover.get()) || self->up_scroll_button_51.has_hover.get()) { return 1; } else { return 0; }}();
                        });
    self->popup_14_horizontal_bar_46_visible.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_popup_14_empty_19_horizontal_scrollbar_policy = self->popup_14_empty_19_horizontal_scrollbar_policy.get();;return ((tmp_popup_14_empty_19_horizontal_scrollbar_policy == slint::cbindgen_private::ScrollBarPolicy::AlwaysOn) || ((tmp_popup_14_empty_19_horizontal_scrollbar_policy == slint::cbindgen_private::ScrollBarPolicy::AsNeeded) && (self->popup_14_horizontal_bar_46_maximum.get() > 0))); }();
                        });
    self->popup_14_inner_fs_15_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->popup_14.height.get();
                        });
    self->popup_14_inner_fs_15_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->popup_14.width.get();
                        });
    self->popup_14_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->popup_14), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->popup_14_empty_19_layoutinfo_h.get())));
                        });
    self->popup_14_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->popup_14), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->popup_14_empty_19_layoutinfo_v.get())));
                        });
    self->popup_14_rectangle_17_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->popup_14.width.get();
                        });
    self->popup_14_thumb_35_height.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_popup_14_vertical_bar_33_maximum = self->popup_14_vertical_bar_33_maximum.get();;return ([&]() -> float { if (tmp_popup_14_vertical_bar_33_maximum <= (0 /(float) self->globals->window().window_handle().scale_factor())) { return 0; } else { return [&]{ [[maybe_unused]] auto tmp_popup_14_vertical_bar_33_page_size = self->popup_14_empty_19_visible_height.get();;return (std::max<float>(std::min<float>(16, (self->popup_14_empty_19_visible_height.get() -(float) 14)), (((self->popup_14_empty_19_visible_height.get() -(float) 14) -(float) 32) * (tmp_popup_14_vertical_bar_33_page_size /(float) (tmp_popup_14_vertical_bar_33_maximum + tmp_popup_14_vertical_bar_33_page_size)))) * self->globals->window().window_handle().scale_factor()); }(); }}() /(float) self->globals->window().window_handle().scale_factor()); }();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->popup_14_thumb_35_width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->popup_14_vertical_bar_33_size.get();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->popup_14_thumb_35_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (16 + ((((self->popup_14_empty_19_visible_height.get() -(float) 14) -(float) 32) -(float) self->popup_14_thumb_35_height.get()) * ((- self->flickable_20.viewport_y.get()) /(float) self->popup_14_vertical_bar_33_maximum.get())));
                        });
    self->popup_14_thumb_48_height.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->popup_14_horizontal_bar_46_size.get();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->popup_14_thumb_48_width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_popup_14_horizontal_bar_46_maximum = self->popup_14_horizontal_bar_46_maximum.get();;return ([&]() -> float { if (tmp_popup_14_horizontal_bar_46_maximum <= (0 /(float) self->globals->window().window_handle().scale_factor())) { return 0; } else { return [&]{ [[maybe_unused]] auto tmp_popup_14_horizontal_bar_46_page_size = self->popup_14_empty_19_visible_width.get();;return (std::max<float>(std::min<float>(16, (self->popup_14_empty_19_visible_width.get() -(float) 14)), ((((self->popup_14_empty_19_visible_width.get() -(float) 14) -(float) 32) * tmp_popup_14_horizontal_bar_46_page_size) /(float) (tmp_popup_14_horizontal_bar_46_maximum + tmp_popup_14_horizontal_bar_46_page_size))) * self->globals->window().window_handle().scale_factor()); }(); }}() /(float) self->globals->window().window_handle().scale_factor()); }();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->popup_14_thumb_48_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (16 + ((((self->popup_14_empty_19_visible_width.get() -(float) 14) -(float) 32) -(float) self->popup_14_thumb_48_width.get()) * ((- self->flickable_20.viewport_x.get()) /(float) self->popup_14_horizontal_bar_46_maximum.get())));
                        });
    self->popup_14_up_scroll_button_38_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->up_scroll_button_38.pressed.get()) { return 1; } else { return [&]() -> float { if (self->up_scroll_button_38.has_hover.get()) { return 2; } else { return 0; }}(); }}();
                        });
    self->popup_14_up_scroll_button_51_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (self->up_scroll_button_51.pressed.get()) { return 1; } else { return [&]() -> float { if (self->up_scroll_button_51.has_hover.get()) { return 2; } else { return 0; }}(); }}();
                        });
    self->popup_14_vertical_bar_33_maximum.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->flickable_20.viewport_height.get() -(float) self->popup_14_empty_19_visible_height.get());
                        });
    self->popup_14_vertical_bar_33_scrolled.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->flickable_20.flicked.call();
                    });
    self->popup_14_vertical_bar_33_size.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_vertical_bar_33_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 6; } else { return 2; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->popup_14_vertical_bar_33_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if ((self->touch_area_36.has_hover.get() || self->down_scroll_button_42.has_hover.get()) || self->up_scroll_button_38.has_hover.get()) { return 1; } else { return 0; }}();
                        });
    self->popup_14_vertical_bar_33_visible.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_popup_14_empty_19_vertical_scrollbar_policy = self->popup_14_empty_19_vertical_scrollbar_policy.get();;return ((tmp_popup_14_empty_19_vertical_scrollbar_policy == slint::cbindgen_private::ScrollBarPolicy::AlwaysOn) || ((tmp_popup_14_empty_19_vertical_scrollbar_policy == slint::cbindgen_private::ScrollBarPolicy::AsNeeded) && (self->popup_14_vertical_bar_33_maximum.get() > 0))); }();
                        });
    self->popup_14.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_6_width.get();
                        });
    self->popup_14_x.set(0);
    self->popup_14_y.set(-4);
    self->inner_fs_15.enabled.set(true);
    self->inner_fs_15.focus_changed_event.set_handler(
                    [this]([[maybe_unused]] slint::cbindgen_private::FocusReason arg_0) {
                        [[maybe_unused]] auto self = this;
                        self->parent.lock().value()->base_7.root_1_popup_has_focus.set(self->inner_fs_15.has_focus.get());
                    });
    self->inner_fs_15.focus_on_click.set(true);
    self->inner_fs_15.focus_on_tab_navigation.set(true);
    self->inner_fs_15.key_pressed.set_handler(
                    [this]([[maybe_unused]] slint::private_api::KeyEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return self->parent.lock().value()->base_7.fn_popup_key_handler(arg_0);
                    });
    self->_shadow_16.blur.set(16);
    self->_shadow_16.border_radius.set(7);
    self->_shadow_16.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+1.107296256e9); } else { return slint::Color::from_argb_encoded(603979776); }}()).color();
                        });
    self->_shadow_16.offset_y.set(8);
    self->rectangle_17.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.281084972e9); } else { return slint::Color::from_argb_encoded(+4.2939804e9); }}());
                        });
    self->rectangle_17.border_radius.set(7);
    self->rectangle_18.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(855638016); } else { return slint::Color::from_argb_encoded(251658240); }}());
                        });
    self->rectangle_18.border_radius.set(7);
    self->rectangle_18.border_width.set(1);
    self->flickable_20.interactive.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return false;
                        });
    self->flickable_20.viewport_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->popup_14_empty_19_visible_height.get(), self->popup_14_empty_22_layoutinfo_v.get().min);
                        });
    self->flickable_20.viewport_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->popup_14_empty_19_visible_width.get(), self->popup_14_empty_22_layoutinfo_h.get().min);
                        });
    self->flickable_20.viewport_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 0;
                        });
    self->flickable_20.viewport_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 0;
                        });
    self->vertical_bar_visibility_32.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->popup_14_vertical_bar_33_visible.get());
                        });
    self->vertical_bar_33.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->popup_14_vertical_bar_33_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.281084972e9); } else { return slint::Color::from_argb_encoded(+4.2939804e9); }}()); } else { return slint::Brush(slint::Color::from_argb_encoded(0)); }}();
                        });
    self->vertical_bar_33.border_radius.set(7);
    self->vertical_bar_33.border_width.set(1);
    self->vertical_bar_clip_34.border_bottom_left_radius.set(7);
    self->vertical_bar_clip_34.border_bottom_right_radius.set(7);
    self->vertical_bar_clip_34.border_top_left_radius.set(7);
    self->vertical_bar_clip_34.border_top_right_radius.set(7);
    self->vertical_bar_clip_34.border_width.set(1);
    self->vertical_bar_clip_34.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->thumb_35.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}());
                        });
    self->thumb_35.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->popup_14_thumb_35_width.get() /(float) 2);
                        });
    self->touch_area_36.enabled.set(true);
    self->touch_area_36.moved.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if (true && self->touch_area_36.pressed.get()) { [&]{ self->flickable_20.viewport_y.set((- std::max<float>(0, std::min<float>(self->popup_14_vertical_bar_33_maximum.get(), (self->popup_14_touch_area_36_pressed_value.get() + [&]() -> float { if (false) { return ((self->touch_area_36.mouse_x.get() -(float) self->touch_area_36.pressed_x.get()) * (self->popup_14_vertical_bar_33_maximum.get() /(float) (((self->popup_14_empty_19_visible_height.get() -(float) 14) -(float) 32) -(float) self->popup_14_thumb_35_width.get()))); } else { return ((self->touch_area_36.mouse_y.get() -(float) self->touch_area_36.pressed_y.get()) * (self->popup_14_vertical_bar_33_maximum.get() /(float) (((self->popup_14_empty_19_visible_height.get() -(float) 14) -(float) 32) -(float) self->popup_14_thumb_35_height.get()))); }}())))));self->popup_14_vertical_bar_33_scrolled.call(); }(); } else { ; }}();
                    });
    self->touch_area_36.pointer_event.set_handler(
                    [this]([[maybe_unused]] slint::private_api::PointerEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if ((arg_0.button == slint::cbindgen_private::PointerEventButton::Left) && (arg_0.kind == slint::cbindgen_private::PointerEventKind::Down)) { self->popup_14_touch_area_36_pressed_value.set((- self->flickable_20.viewport_y.get())); } else { ; }}();
                    });
    self->touch_area_36.scroll_event.set_handler(
                    [this]([[maybe_unused]] slint::private_api::PointerScrollEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return [&]{ [[maybe_unused]] auto returned_expression2 = [&]{ [[maybe_unused]] auto return_check_merge2 = [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (false && (std::abs(float(arg_0.delta_x - 0)) >= std::numeric_limits<float>::epsilon())) { return std::make_tuple(false, [&]{ self->flickable_20.viewport_y.set(std::max<float>((- self->popup_14_vertical_bar_33_maximum.get()), std::min<float>(0, (self->flickable_20.viewport_y.get() + arg_0.delta_x))));return slint::cbindgen_private::EventResult::Accept; }()); } else { return [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (! ((! false) && (std::abs(float(arg_0.delta_y - 0)) >= std::numeric_limits<float>::epsilon()))) { return std::make_tuple(true, slint::cbindgen_private::EventResult::Reject); } else { return std::make_tuple(false, [&]{ self->flickable_20.viewport_y.set(std::max<float>((- self->popup_14_vertical_bar_33_maximum.get()), std::min<float>(0, (self->flickable_20.viewport_y.get() + arg_0.delta_y))));return slint::cbindgen_private::EventResult::Accept; }()); }}(); }}();;return [&]() -> std::tuple<slint::cbindgen_private::EventResult, bool, slint::cbindgen_private::EventResult> { if (std::get<0>(return_check_merge2)) { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject); } else { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge2)); }}(); }();;return [&]() -> slint::cbindgen_private::EventResult { if (std::get<1>(returned_expression2)) { return std::get<0>(returned_expression2); } else { return std::get<2>(returned_expression2); }}(); }();
                    });
    self->up_scroll_button_opacity_37.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_vertical_bar_33_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 1; } else { return 0; }}();
                        });
    self->up_scroll_button_38.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->flickable_20.viewport_y.set(std::min<float>(0, (self->flickable_20.viewport_y.get() + 10)));
                    });
    self->up_scroll_button_38.enabled.set(true);
    self->icon_opacity_39.opacity.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 1;
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_40.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->popup_14_up_scroll_button_38_state.get() - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_40.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_3, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->icon_40.width.get());
                        });
    self->icon_40.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_3, "svg"));
    self->icon_40.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_up_scroll_button_38_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 6; } else { return 8; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->down_scroll_button_opacity_41.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_vertical_bar_33_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 1; } else { return 0; }}();
                        });
    self->down_scroll_button_42.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->flickable_20.viewport_y.set(std::max<float>((- self->popup_14_vertical_bar_33_maximum.get()), (self->flickable_20.viewport_y.get() -(float) 10)));
                    });
    self->down_scroll_button_42.enabled.set(true);
    self->icon_opacity_43.opacity.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 1;
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_44.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->popup_14_down_scroll_button_42_state.get() - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_44.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_1, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->icon_44.width.get());
                        });
    self->icon_44.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_1, "svg"));
    self->icon_44.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_down_scroll_button_42_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 6; } else { return 8; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->horizontal_bar_visibility_45.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->popup_14_horizontal_bar_46_visible.get());
                        });
    self->horizontal_bar_46.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->popup_14_horizontal_bar_46_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.281084972e9); } else { return slint::Color::from_argb_encoded(+4.2939804e9); }}()); } else { return slint::Brush(slint::Color::from_argb_encoded(0)); }}();
                        });
    self->horizontal_bar_46.border_radius.set(7);
    self->horizontal_bar_46.border_width.set(1);
    self->horizontal_bar_clip_47.border_bottom_left_radius.set(7);
    self->horizontal_bar_clip_47.border_bottom_right_radius.set(7);
    self->horizontal_bar_clip_47.border_top_left_radius.set(7);
    self->horizontal_bar_clip_47.border_top_right_radius.set(7);
    self->horizontal_bar_clip_47.border_width.set(1);
    self->horizontal_bar_clip_47.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->thumb_48.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}());
                        });
    self->thumb_48.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->popup_14_thumb_48_height.get() /(float) 2);
                        });
    self->touch_area_49.enabled.set(true);
    self->touch_area_49.moved.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if (true && self->touch_area_49.pressed.get()) { [&]{ self->flickable_20.viewport_x.set((- std::max<float>(0, std::min<float>(self->popup_14_horizontal_bar_46_maximum.get(), (self->popup_14_touch_area_49_pressed_value.get() + [&]() -> float { if (true) { return ((self->touch_area_49.mouse_x.get() -(float) self->touch_area_49.pressed_x.get()) * (self->popup_14_horizontal_bar_46_maximum.get() /(float) (((self->popup_14_empty_19_visible_width.get() -(float) 14) -(float) 32) -(float) self->popup_14_thumb_48_width.get()))); } else { return ((self->touch_area_49.mouse_y.get() -(float) self->touch_area_49.pressed_y.get()) * (self->popup_14_horizontal_bar_46_maximum.get() /(float) (((self->popup_14_empty_19_visible_width.get() -(float) 14) -(float) 32) -(float) self->popup_14_thumb_48_height.get()))); }}())))));self->popup_14_horizontal_bar_46_scrolled.call(); }(); } else { ; }}();
                    });
    self->touch_area_49.pointer_event.set_handler(
                    [this]([[maybe_unused]] slint::private_api::PointerEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        [&]() -> void { if ((arg_0.button == slint::cbindgen_private::PointerEventButton::Left) && (arg_0.kind == slint::cbindgen_private::PointerEventKind::Down)) { self->popup_14_touch_area_49_pressed_value.set((- self->flickable_20.viewport_x.get())); } else { ; }}();
                    });
    self->touch_area_49.scroll_event.set_handler(
                    [this]([[maybe_unused]] slint::private_api::PointerScrollEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return [&]{ [[maybe_unused]] auto returned_expression3 = [&]{ [[maybe_unused]] auto return_check_merge3 = [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (true && (std::abs(float(arg_0.delta_x - 0)) >= std::numeric_limits<float>::epsilon())) { return std::make_tuple(false, [&]{ self->flickable_20.viewport_x.set(std::max<float>((- self->popup_14_horizontal_bar_46_maximum.get()), std::min<float>(0, (self->flickable_20.viewport_x.get() + arg_0.delta_x))));return slint::cbindgen_private::EventResult::Accept; }()); } else { return [&]() -> std::tuple<bool, slint::cbindgen_private::EventResult> { if (! ((! true) && (std::abs(float(arg_0.delta_y - 0)) >= std::numeric_limits<float>::epsilon()))) { return std::make_tuple(true, slint::cbindgen_private::EventResult::Reject); } else { return std::make_tuple(false, [&]{ self->flickable_20.viewport_x.set(std::max<float>((- self->popup_14_horizontal_bar_46_maximum.get()), std::min<float>(0, (self->flickable_20.viewport_x.get() + arg_0.delta_y))));return slint::cbindgen_private::EventResult::Accept; }()); }}(); }}();;return [&]() -> std::tuple<slint::cbindgen_private::EventResult, bool, slint::cbindgen_private::EventResult> { if (std::get<0>(return_check_merge3)) { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject); } else { return std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge3)); }}(); }();;return [&]() -> slint::cbindgen_private::EventResult { if (std::get<1>(returned_expression3)) { return std::get<0>(returned_expression3); } else { return std::get<2>(returned_expression3); }}(); }();
                    });
    self->up_scroll_button_opacity_50.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_horizontal_bar_46_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 1; } else { return 0; }}();
                        });
    self->up_scroll_button_51.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->flickable_20.viewport_x.set(std::min<float>(0, (self->flickable_20.viewport_x.get() + 10)));
                    });
    self->up_scroll_button_51.enabled.set(true);
    self->icon_opacity_52.opacity.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 1;
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_53.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->popup_14_up_scroll_button_51_state.get() - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_53.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_4, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->icon_53.width.get());
                        });
    self->icon_53.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_4, "svg"));
    self->icon_53.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_up_scroll_button_51_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 4; } else { return 6; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->down_scroll_button_opacity_54.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_horizontal_bar_46_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 1; } else { return 0; }}();
                        });
    self->down_scroll_button_55.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->flickable_20.viewport_x.set(std::max<float>((- self->popup_14_horizontal_bar_46_maximum.get()), (self->flickable_20.viewport_x.get() -(float) 10)));
                    });
    self->down_scroll_button_55.enabled.set(true);
    self->icon_opacity_56.opacity.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return 1;
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_57.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (std::abs(float(self->popup_14_down_scroll_button_55_state.get() - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_57.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_2, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->icon_57.width.get());
                        });
    self->icon_57.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_2, "svg"));
    self->icon_57.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (std::abs(float(self->popup_14_down_scroll_button_55_state.get() - 1)) < std::numeric_limits<float>::epsilon()) { return 4; } else { return 6; }}();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), 1));
    self->popup_14.always_on_top.set_constant();
    self->popup_14.background.set_constant();
    self->popup_14.default_font_family.set_constant();
    self->popup_14.default_font_weight.set_constant();
    self->popup_14.icon.set_constant();
    self->popup_14.no_frame.set_constant();
    self->popup_14.resize_border_width.set_constant();
    self->popup_14.title.set_constant();
    self->popup_14_x.set_constant();
    self->popup_14_y.set_constant();
    self->inner_fs_15.enabled.set_constant();
    self->inner_fs_15.focus_on_click.set_constant();
    self->inner_fs_15.focus_on_tab_navigation.set_constant();
    self->_shadow_16.blur.set_constant();
    self->_shadow_16.border_radius.set_constant();
    self->_shadow_16.offset_x.set_constant();
    self->_shadow_16.offset_y.set_constant();
    self->rectangle_17.border_color.set_constant();
    self->rectangle_17.border_radius.set_constant();
    self->rectangle_17.border_width.set_constant();
    self->rectangle_18.background.set_constant();
    self->rectangle_18.border_radius.set_constant();
    self->rectangle_18.border_width.set_constant();
    self->vertical_bar_visibility_32.border_bottom_left_radius.set_constant();
    self->vertical_bar_visibility_32.border_bottom_right_radius.set_constant();
    self->vertical_bar_visibility_32.border_top_left_radius.set_constant();
    self->vertical_bar_visibility_32.border_top_right_radius.set_constant();
    self->vertical_bar_visibility_32.border_width.set_constant();
    self->vertical_bar_33.border_color.set_constant();
    self->vertical_bar_33.border_radius.set_constant();
    self->vertical_bar_33.border_width.set_constant();
    self->vertical_bar_clip_34.border_bottom_left_radius.set_constant();
    self->vertical_bar_clip_34.border_bottom_right_radius.set_constant();
    self->vertical_bar_clip_34.border_top_left_radius.set_constant();
    self->vertical_bar_clip_34.border_top_right_radius.set_constant();
    self->vertical_bar_clip_34.border_width.set_constant();
    self->thumb_35.border_color.set_constant();
    self->thumb_35.border_width.set_constant();
    self->touch_area_36.enabled.set_constant();
    self->touch_area_36.mouse_cursor.set_constant();
    self->up_scroll_button_38.enabled.set_constant();
    self->up_scroll_button_38.mouse_cursor.set_constant();
    self->icon_40.image_fit.set_constant();
    self->icon_40.image_rendering.set_constant();
    self->icon_40.source.set_constant();
    self->down_scroll_button_42.enabled.set_constant();
    self->down_scroll_button_42.mouse_cursor.set_constant();
    self->icon_44.image_fit.set_constant();
    self->icon_44.image_rendering.set_constant();
    self->icon_44.source.set_constant();
    self->horizontal_bar_visibility_45.border_bottom_left_radius.set_constant();
    self->horizontal_bar_visibility_45.border_bottom_right_radius.set_constant();
    self->horizontal_bar_visibility_45.border_top_left_radius.set_constant();
    self->horizontal_bar_visibility_45.border_top_right_radius.set_constant();
    self->horizontal_bar_visibility_45.border_width.set_constant();
    self->horizontal_bar_46.border_color.set_constant();
    self->horizontal_bar_46.border_radius.set_constant();
    self->horizontal_bar_46.border_width.set_constant();
    self->horizontal_bar_clip_47.border_bottom_left_radius.set_constant();
    self->horizontal_bar_clip_47.border_bottom_right_radius.set_constant();
    self->horizontal_bar_clip_47.border_top_left_radius.set_constant();
    self->horizontal_bar_clip_47.border_top_right_radius.set_constant();
    self->horizontal_bar_clip_47.border_width.set_constant();
    self->thumb_48.border_color.set_constant();
    self->thumb_48.border_width.set_constant();
    self->touch_area_49.enabled.set_constant();
    self->touch_area_49.mouse_cursor.set_constant();
    self->up_scroll_button_51.enabled.set_constant();
    self->up_scroll_button_51.mouse_cursor.set_constant();
    self->icon_53.image_fit.set_constant();
    self->icon_53.image_rendering.set_constant();
    self->icon_53.source.set_constant();
    self->down_scroll_button_55.enabled.set_constant();
    self->down_scroll_button_55.mouse_cursor.set_constant();
    self->icon_57.image_fit.set_constant();
    self->icon_57.image_rendering.set_constant();
    self->icon_57.source.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return self->parent.lock().value()->base_7.root_1_model.get(); });
}

inline auto Component_popup_14::user_init () -> void{
    [[maybe_unused]] auto self = this;
    self->fn_focus();
    ;
    [&]{ [&]{ ;; }();[&]{ ;; }(); }();
}

inline auto Component_popup_14::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? self->popup_14_layoutinfo_h.get() : self->popup_14_layoutinfo_v.get();
}

inline auto Component_popup_14::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->popup_14.height.get()), float(self->popup_14.width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->popup_14.height.get()), float(self->popup_14.width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->popup_14.height.get()), float(self->popup_14.width.get()), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->popup_14.height.get()), float(self->popup_14.width.get()), float(0), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->popup_14.height.get()), float(self->popup_14.width.get()), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->popup_14_empty_19_visible_height.get()), float(self->popup_14_empty_19_visible_width.get()), float(0), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 8: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->flickable_20.viewport_height.get()), float(self->flickable_20.viewport_width.get()), float(self->flickable_20.viewport_x.get()), float(self->flickable_20.viewport_y.get())));
        case 10: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->popup_14_empty_19_visible_height.get() -(float) 14)), float(14), float(((self->popup_14_empty_19_visible_width.get() + 0) -(float) 14)), float(0)));
        case 11: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->popup_14_empty_19_visible_height.get() -(float) 14)), float(14), float(0), float(0)));
        case 12: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->popup_14_thumb_35_height.get()), float(self->popup_14_thumb_35_width.get()), float((10 -(float) self->popup_14_thumb_35_width.get())), float(self->popup_14_thumb_35_y.get())));
        case 13: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->popup_14_empty_19_visible_height.get() -(float) 14)), float(14), float(0), float(0)));
        case 14: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(3), float(4)));
        case 15: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(3), float((((self->popup_14_empty_19_visible_height.get() -(float) 14) -(float) 6) -(float) 4))));
        case 16: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(0), float(0)));
        case 17: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->icon_40.height.get()), float(self->icon_40.width.get()), float(((8 -(float) self->icon_40.width.get()) /(float) 2)), float(((6 -(float) self->icon_40.height.get()) /(float) 2))));
        case 18: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->icon_40.height.get()), float(self->icon_40.width.get()), float(0), float(0)));
        case 19: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(0), float(0)));
        case 20: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->icon_44.height.get()), float(self->icon_44.width.get()), float(((8 -(float) self->icon_44.width.get()) /(float) 2)), float(((6 -(float) self->icon_44.height.get()) /(float) 2))));
        case 21: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->icon_44.height.get()), float(self->icon_44.width.get()), float(0), float(0)));
        case 22: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float((self->popup_14_empty_19_visible_width.get() -(float) 14)), float(0), float(((self->popup_14_empty_19_visible_height.get() + 0) -(float) 14))));
        case 23: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float((self->popup_14_empty_19_visible_width.get() -(float) 14)), float(0), float(0)));
        case 24: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->popup_14_thumb_48_height.get()), float(self->popup_14_thumb_48_width.get()), float(self->popup_14_thumb_48_x.get()), float((10 -(float) self->popup_14_thumb_48_height.get()))));
        case 25: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float((self->popup_14_empty_19_visible_width.get() -(float) 14)), float(0), float(0)));
        case 26: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(4), float(3)));
        case 27: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float((((self->popup_14_empty_19_visible_width.get() -(float) 14) -(float) 6) -(float) 4)), float(3)));
        case 28: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(0), float(0)));
        case 29: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->icon_53.height.get()), float(self->icon_53.width.get()), float(((6 -(float) self->icon_53.width.get()) /(float) 2)), float(((8 -(float) self->icon_53.height.get()) /(float) 2))));
        case 30: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->icon_53.height.get()), float(self->icon_53.width.get()), float(0), float(0)));
        case 31: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(0), float(0)));
        case 32: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->icon_57.height.get()), float(self->icon_57.width.get()), float(((6 -(float) self->icon_57.width.get()) /(float) 2)), float(((8 -(float) self->icon_57.height.get()) /(float) 2))));
        case 33: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->icon_57.height.get()), float(self->icon_57.width.get()), float(0), float(0)));
    }
    return {};
}

inline auto Component_popup_14::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_popup_14::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_popup_14::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_popup_14::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_popup_14::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_popup_14::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            } };
        std::abort();
}

inline auto Component_popup_14::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            } };
        std::abort();
}

inline auto Component_popup_14::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto Component_popup_14::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_popup_14*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Component_popup_14*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_popup_14::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_popup_14::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Component_popup_14*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Component_popup_14::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Component_popup_14*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Component_popup_14::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_popup_14::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_popup_14*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, 0 };
}

inline auto Component_popup_14::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_popup_14::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_popup_14::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(2, 2, 0, 1, false), 
slint::private_api::make_item_node(0, 4, 1, 2, false), 
slint::private_api::make_item_node(4, 4, 1, 3, false), 
slint::private_api::make_item_node(0, 8, 3, 4, false), 
slint::private_api::make_item_node(1, 8, 3, 5, false), 
slint::private_api::make_item_node(1, 10, 3, 6, false), 
slint::private_api::make_item_node(1, 22, 3, 7, false), 
slint::private_api::make_item_node(1, 9, 5, 8, false), 
slint::private_api::make_dyn_node(0, 8), 
slint::private_api::make_item_node(1, 11, 6, 9, false), 
slint::private_api::make_item_node(4, 12, 10, 10, false), 
slint::private_api::make_item_node(0, 16, 11, 11, false), 
slint::private_api::make_item_node(0, 16, 11, 12, false), 
slint::private_api::make_item_node(1, 16, 11, 13, false), 
slint::private_api::make_item_node(1, 19, 11, 14, false), 
slint::private_api::make_item_node(1, 17, 14, 15, false), 
slint::private_api::make_item_node(1, 18, 16, 16, false), 
slint::private_api::make_item_node(0, 19, 17, 17, false), 
slint::private_api::make_item_node(1, 20, 15, 18, false), 
slint::private_api::make_item_node(1, 21, 19, 19, false), 
slint::private_api::make_item_node(0, 22, 20, 20, false), 
slint::private_api::make_item_node(1, 23, 7, 21, false), 
slint::private_api::make_item_node(4, 24, 22, 22, false), 
slint::private_api::make_item_node(0, 28, 23, 23, false), 
slint::private_api::make_item_node(0, 28, 23, 24, false), 
slint::private_api::make_item_node(1, 28, 23, 25, false), 
slint::private_api::make_item_node(1, 31, 23, 26, false), 
slint::private_api::make_item_node(1, 29, 26, 27, false), 
slint::private_api::make_item_node(1, 30, 28, 28, false), 
slint::private_api::make_item_node(0, 31, 29, 29, false), 
slint::private_api::make_item_node(1, 32, 27, 30, false), 
slint::private_api::make_item_node(1, 33, 31, 31, false), 
slint::private_api::make_item_node(0, 34, 32, 32, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_popup_14::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(Component_popup_14, popup_14) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable),  offsetof(Component_popup_14, inner_fs_15) }, 
{ SLINT_GET_ITEM_VTABLE(BoxShadowVTable),  offsetof(Component_popup_14, _shadow_16) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_popup_14, rectangle_17) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_popup_14, rectangle_18) }, 
{ SLINT_GET_ITEM_VTABLE(FlickableVTable),  offsetof(Component_popup_14, flickable_20) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_popup_14, vertical_bar_visibility_32) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_popup_14, horizontal_bar_visibility_45) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_popup_14, flickable_viewport_21) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_popup_14, vertical_bar_33) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_popup_14, vertical_bar_clip_34) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_popup_14, thumb_35) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_popup_14, touch_area_36) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(Component_popup_14, up_scroll_button_opacity_37) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(Component_popup_14, down_scroll_button_opacity_41) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_popup_14, up_scroll_button_38) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(Component_popup_14, icon_opacity_39) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_popup_14, icon_40) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_popup_14, down_scroll_button_42) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(Component_popup_14, icon_opacity_43) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_popup_14, icon_44) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_popup_14, horizontal_bar_46) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_popup_14, horizontal_bar_clip_47) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_popup_14, thumb_48) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_popup_14, touch_area_49) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(Component_popup_14, up_scroll_button_opacity_50) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(Component_popup_14, down_scroll_button_opacity_54) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_popup_14, up_scroll_button_51) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(Component_popup_14, icon_opacity_52) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_popup_14, icon_53) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_popup_14, down_scroll_button_55) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(Component_popup_14, icon_opacity_56) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_popup_14, icon_57) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_popup_14::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_popup_14*>(component.instance)->layout_info(o);
}

inline auto Component_popup_14::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_popup_14*>(component.instance)->item_geometry(index);
}

inline auto Component_popup_14::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_popup_14*>(component.instance)->accessible_role(index);
}

inline auto Component_popup_14::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_popup_14*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_popup_14::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_popup_14*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_popup_14::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_popup_14*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_popup_14::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_popup_14::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_popup_14*>(component.instance)->globals->window().window_handle();
}

inline auto Component_popup_14::create (class ComboBox_root_6 const * parent) -> slint::ComponentHandle<Component_popup_14>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_popup_14>::make();
    auto self = const_cast<Component_popup_14 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_popup_14>{ self_rc };
}

inline Component_popup_14::~Component_popup_14 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline const slint::private_api::ItemTreeVTable Component_focusborder_12::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_focusborder_12>, slint::private_api::dealloc };

inline auto Component_focusborder_12::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ComboBox_root_6 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const ComboBox_root_6>(parent->self_weak.lock().value(), parent);
    this->focusborder_12.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->focusborder_12.root_4.border_radius.set(3);
    self->focusborder_12.root_4_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_6_height.get();
                        });
    self->focusborder_12.root_4_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_6_width.get();
                        });
    self->focusborder_12.root_4.background.set_constant();
    self->focusborder_12.root_4.border_radius.set_constant();
    self->focusborder_12.root_4.border_width.set_constant();
}

inline auto Component_focusborder_12::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->focusborder_12.user_init();
}

inline auto Component_focusborder_12::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_12.root_4), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->focusborder_12.self_weak.lock()->into_dyn(), self->focusborder_12.tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_12.root_4), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->focusborder_12.self_weak.lock()->into_dyn(), self->focusborder_12.tree_index);
}

inline auto Component_focusborder_12::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->root_6_height.get()), float(self->parent.lock().value()->root_6_width.get()), float(0), float(0)));
    }
    if (index == 0) {
        return self->focusborder_12.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_12.item_geometry(index - 0);
    } else return {};
}

inline auto Component_focusborder_12::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_12.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_12.accessible_role(index - 0);
    } else return {};
}

inline auto Component_focusborder_12::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->focusborder_12.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_12.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_focusborder_12::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->focusborder_12.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_12.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_focusborder_12::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_12.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_12.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_focusborder_12::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_12.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_12.element_infos(index - 0);
    } else return {};
}

inline auto Component_focusborder_12::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_focusborder_12*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_focusborder_12*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_focusborder_12::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_focusborder_12::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_focusborder_12::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_focusborder_12::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_focusborder_12::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_focusborder_12*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 2 };
}

inline auto Component_focusborder_12::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_focusborder_12::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_focusborder_12::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_focusborder_12::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_12, focusborder_12) +  offsetof(FocusBorder_root_4, root_4) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_12, focusborder_12) +  offsetof(FocusBorder_root_4, rectangle_5) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_focusborder_12::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_focusborder_12*>(component.instance)->layout_info(o);
}

inline auto Component_focusborder_12::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_focusborder_12*>(component.instance)->item_geometry(index);
}

inline auto Component_focusborder_12::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_focusborder_12*>(component.instance)->accessible_role(index);
}

inline auto Component_focusborder_12::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_focusborder_12*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_focusborder_12::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_focusborder_12*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_focusborder_12::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_focusborder_12*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_focusborder_12::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_focusborder_12::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_focusborder_12*>(component.instance)->globals->window().window_handle();
}

inline auto Component_focusborder_12::create (class ComboBox_root_6 const * parent) -> slint::ComponentHandle<Component_focusborder_12>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_12>::make();
    auto self = const_cast<Component_focusborder_12 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_focusborder_12>{ self_rc };
}

inline Component_focusborder_12::~Component_focusborder_12 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_focusborder_12::init () -> void{
    user_init();
}

inline auto Component_focusborder_12::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto ComboBox_root_6::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->base_7.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 1 - 1, tree_index_of_first_child + 4 - 1);
    self->root_6_accessible_action_expand.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->base_7.root_1_show_popup.call();
                    });
    self->root_6_background_8_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_6_width.get();
                        });
    self->root_6_layout_9_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 2>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_10), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->icon_11), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(12, layout_info.max_percent, 12, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(11, 11), self->root_6_background_8_width.get(), 8),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->root_6_layout_9_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 2>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_10), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->icon_11), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(12, layout_info.max_percent, 12, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2),8,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(11, 11),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->root_6_layout_9_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 2>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_10), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->icon_11), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->root_6_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (([&]{ [[maybe_unused]] auto layout_info_0 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_0.max, layout_info_0.max_percent, std::max<float>(160, self->root_6_layout_9_layoutinfo_v.get().min), layout_info_0.min_percent, layout_info_0.preferred, 1); }() + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_6_layout_9_layoutinfo_h.get()));
                        });
    self->root_6_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (([&]{ [[maybe_unused]] auto layout_info_1 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_1.max, layout_info_1.max_percent, std::max<float>(32, self->root_6_layout_9_layoutinfo_v.get().min), layout_info_1.min_percent, layout_info_1.preferred, 0); }() + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_6_layout_9_layoutinfo_v.get()));
                        });
    self->root_6_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (! self->base_7.i_focus_scope_2.enabled.get()) { return 1; } else { return [&]() -> float { if (self->base_7.i_touch_area_3.pressed.get()) { return 2; } else { return [&]() -> float { if (self->base_7.i_touch_area_3.has_hover.get()) { return 3; } else { return 0; }}(); }}(); }}();
                        });
    self->base_7.root_1_close_popup.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->globals->window().window_handle().close_popup(self->popup_id_0);
                    });
    self->base_7.root_1_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->root_6_height.get());
                        });
    self->base_7.root_1_show_popup.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->globals->window().window_handle().close_popup(self->popup_id_0); self->popup_id_0 = self->globals->window().window_handle().template show_popup<Component_popup_14>(&*(self), [=](auto self) { return [&](const auto &a_0, const auto &a_1){ slint::private_api::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }(self->popup_14_x.get(), self->popup_14_y.get()); }, slint::cbindgen_private::PopupClosePolicy::CloseOnClick, { self->self_weak.lock()->into_dyn(), self->tree_index });
                    });
    self->base_7.root_1_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->root_6_width.get());
                        });
    self->background_8.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_6_state = self->root_6_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(184549375); } else { return slint::Color::from_argb_encoded(+1.308228089e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(184549375); } else { return slint::Color::from_argb_encoded(251658240); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 3)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+2.163866105e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(268435455); } else { return slint::Color::from_argb_encoded(+3.019898879e9); }}()); }}(); }}(); }}(); }();
                        });
    self->background_8.border_color.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_6_state = self->root_6_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); } else { return self->globals->global_FluentPalette_76->control_border.get(); }}(); }}(); }();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 200, slint::cbindgen_private::EasingCurve(), 1));
    self->background_8.border_radius.set(3);
    self->background_8.border_width.set(1);
    self->text_10.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_6_state = self->root_6_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+1.593835519e9); } else { return slint::Color::from_argb_encoded(+1.577058304e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}()); }}(); }}(); }();
                        });
    self->text_10.font_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1.0766 * slint::private_api::get_resolved_default_font_size(*this));
                        });
    self->text_10.font_weight.set(static_cast<int>(400));
    self->text_10.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_6_height.get();
                        });
    self->text_10.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Left);
    self->text_10.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->base_7.root_1_current_value.get();
                        });
    self->text_10.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->text_10.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_6_layout_9_layout_cache.get()[1];
                        });
    self->icon_11.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_6_state = self->root_6_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 1)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+1.593835519e9); } else { return slint::Color::from_argb_encoded(+1.577058304e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_6_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+2.332033023e9); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); }}(); }}(); }();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->icon_11.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_6_height.get();
                        });
    self->icon_11.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->icon_11.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_0, "svg"));
    self->icon_11.width.set(12);
    self->background_8.border_radius.set_constant();
    self->background_8.border_width.set_constant();
    self->text_10.font_weight.set_constant();
    self->text_10.horizontal_alignment.set_constant();
    self->text_10.vertical_alignment.set_constant();
    self->icon_11.image_fit.set_constant();
    self->icon_11.image_rendering.set_constant();
    self->icon_11.source.set_constant();
    self->icon_11.width.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return (self->base_7.root_1_has_focus.get() && self->base_7.i_focus_scope_2.enabled.get()); });
}

inline auto ComboBox_root_6::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->base_7.user_init();
}

inline auto ComboBox_root_6::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_6_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(160, self->root_6_layout_9_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 1); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_6_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->root_6_layout_9_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }();
}

inline auto ComboBox_root_6::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_6_height.get()), float(self->root_6_width.get()), float(self->root_6_x.get()), float(self->root_6_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * self->root_6_height.get())), float((1 * self->root_6_width.get())), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_6_height.get()), float(self->root_6_width.get()), float(0), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_6_height.get()), float(self->root_6_layout_9_layout_cache.get()[1]), float(self->root_6_layout_9_layout_cache.get()[0]), float(0)));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_6_height.get()), float(12), float(self->root_6_layout_9_layout_cache.get()[2]), float(2)));
    }
    if (index == 1) {
        return self->base_7.item_geometry(0);
    } else if (index >= 4 && index < 6) {
        return self->base_7.item_geometry(index - 3);
    } else return {};
}

inline auto ComboBox_root_6::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Combobox;
    }
    if (index == 1) {
        return self->base_7.accessible_role(0);
    } else if (index >= 4 && index < 6) {
        return self->base_7.accessible_role(index - 3);
    } else return {};
}

inline auto ComboBox_root_6::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return [&]() -> slint::SharedString { if (self->base_7.i_focus_scope_2.enabled.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Expandable): return [&]() -> slint::SharedString { if (true) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Expanded): return [&]() -> slint::SharedString { if (self->base_7.root_1_popup_has_focus.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Value): return self->base_7.root_1_current_value.get();
    }
    if (index == 1) {
        return self->base_7.accessible_string_property(0, what);
    } else if (index >= 4 && index < 6) {
        return self->base_7.accessible_string_property(index - 3, what);
    } else return {};
}

inline auto ComboBox_root_6::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Expand): return self->root_6_accessible_action_expand.call();
    }
    if (index == 1) {
        return self->base_7.accessibility_action(0, action);
    } else if (index >= 4 && index < 6) {
        return self->base_7.accessibility_action(index - 3, action);
    } else return ;
}

inline auto ComboBox_root_6::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::SupportedAccessibilityAction_Expand;
    }
    if (index == 1) {
        return self->base_7.supported_accessibility_actions(0);
    } else if (index >= 4 && index < 6) {
        return self->base_7.supported_accessibility_actions(index - 3);
    } else return {};
}

inline auto ComboBox_root_6::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->base_7.element_infos(0);
    } else if (index >= 4 && index < 6) {
        return self->base_7.element_infos(index - 3);
    } else return {};
}

inline auto ComboBox_root_6::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            } };
        std::abort();
}

inline auto ComboBox_root_6::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            } };
        std::abort();
}

inline auto ComboBox_root_6::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline const slint::private_api::ItemTreeVTable Component_image_62::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_image_62>, slint::private_api::dealloc };

inline auto Component_image_62::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_58 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_58>(parent->self_weak.lock().value(), parent);
    slint::private_api::Property<slint::Image>::link_two_way(&self->image_62.source, &self->parent.lock().value()->root_58_icon);
    self->image_62.colorize.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush(slint::Color::from_argb_encoded(0));
                        });
    self->image_62.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->root_58_height.get() -(float) 5) -(float) 5);
                        });
    self->image_62.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->image_62.width.set(20);
    self->image_62.image_fit.set_constant();
    self->image_62.image_rendering.set_constant();
    self->image_62.source.set_constant();
    self->image_62.width.set_constant();
}

inline auto Component_image_62::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_image_62::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_62), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(20, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->image_62), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_image_62::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->parent.lock().value()->root_58_height.get() -(float) 5) -(float) 5)), float(20), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_58_i_layout_61_layout_cache.get(), 0, 0)), float(5)));
    }
    return {};
}

inline auto Component_image_62::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Image;
    }
    return {};
}

inline auto Component_image_62::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_image_62::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_image_62::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_62::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_62::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_image_62*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_image_62*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_image_62::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_image_62::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_image_62::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_image_62::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_image_62::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_image_62*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 5 };
}

inline auto Component_image_62::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_image_62::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_image_62::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_image_62::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_image_62, image_62) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_image_62::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_image_62*>(component.instance)->layout_info(o);
}

inline auto Component_image_62::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_image_62*>(component.instance)->item_geometry(index);
}

inline auto Component_image_62::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_image_62*>(component.instance)->accessible_role(index);
}

inline auto Component_image_62::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_image_62*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_image_62::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_image_62*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_image_62::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_image_62*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_image_62::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_image_62::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_image_62*>(component.instance)->globals->window().window_handle();
}

inline auto Component_image_62::create (class Button_root_58 const * parent) -> slint::ComponentHandle<Component_image_62>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_62>::make();
    auto self = const_cast<Component_image_62 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_image_62>{ self_rc };
}

inline Component_image_62::~Component_image_62 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_image_62::init () -> void{
    user_init();
}

inline auto Component_image_62::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_text_64::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_text_64>, slint::private_api::dealloc };

inline auto Component_text_64::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_58 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_58>(parent->self_weak.lock().value(), parent);
    self->text_64.color.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_58_text_color.get();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->text_64.font_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1.0766 * slint::private_api::get_resolved_default_font_size(*this));
                        });
    self->text_64.font_weight.set(static_cast<int>(400));
    self->text_64.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->parent.lock().value()->root_58_height.get() -(float) 5) -(float) 5);
                        });
    self->text_64.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->text_64.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_58_text.get();
                        });
    self->text_64.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->text_64.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::layout_cache_access(self->parent.lock().value()->root_58_i_layout_61_layout_cache.get(), 3, 0);
                        });
    self->text_64.font_weight.set_constant();
    self->text_64.horizontal_alignment.set_constant();
    self->text_64.vertical_alignment.set_constant();
}

inline auto Component_text_64::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_text_64::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_64), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_64), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_text_64::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->parent.lock().value()->root_58_height.get() -(float) 5) -(float) 5)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_58_i_layout_61_layout_cache.get(), 3, 0)), float(slint::private_api::layout_cache_access(self->parent.lock().value()->root_58_i_layout_61_layout_cache.get(), 2, 0)), float(5)));
    }
    return {};
}

inline auto Component_text_64::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_64::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_text_64::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_text_64::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_64::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_64::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_text_64*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_text_64*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_text_64::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_text_64::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_text_64::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_text_64::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_text_64::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_text_64*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 6 };
}

inline auto Component_text_64::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_text_64::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_text_64::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_text_64::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Component_text_64, text_64) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_text_64::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_text_64*>(component.instance)->layout_info(o);
}

inline auto Component_text_64::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_text_64*>(component.instance)->item_geometry(index);
}

inline auto Component_text_64::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_text_64*>(component.instance)->accessible_role(index);
}

inline auto Component_text_64::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_text_64*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_text_64::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_text_64*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_text_64::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_text_64*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_text_64::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_text_64::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_text_64*>(component.instance)->globals->window().window_handle();
}

inline auto Component_text_64::create (class Button_root_58 const * parent) -> slint::ComponentHandle<Component_text_64>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_64>::make();
    auto self = const_cast<Component_text_64 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_text_64>{ self_rc };
}

inline Component_text_64::~Component_text_64 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_text_64::init () -> void{
    user_init();
}

inline auto Component_text_64::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline const slint::private_api::ItemTreeVTable Component_focusborder_68::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_focusborder_68>, slint::private_api::dealloc };

inline auto Component_focusborder_68::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_58 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_58>(parent->self_weak.lock().value(), parent);
    this->focusborder_68.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->focusborder_68.root_4.border_radius.set(4);
    self->focusborder_68.root_4_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_58_height.get();
                        });
    self->focusborder_68.root_4_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->parent.lock().value()->root_58_width.get();
                        });
    self->focusborder_68.root_4.background.set_constant();
    self->focusborder_68.root_4.border_radius.set_constant();
    self->focusborder_68.root_4.border_width.set_constant();
}

inline auto Component_focusborder_68::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->focusborder_68.user_init();
}

inline auto Component_focusborder_68::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_68.root_4), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->focusborder_68.self_weak.lock()->into_dyn(), self->focusborder_68.tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->focusborder_68.root_4), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->focusborder_68.self_weak.lock()->into_dyn(), self->focusborder_68.tree_index);
}

inline auto Component_focusborder_68::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->parent.lock().value()->root_58_height.get()), float(self->parent.lock().value()->root_58_width.get()), float(0), float(0)));
    }
    if (index == 0) {
        return self->focusborder_68.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_68.item_geometry(index - 0);
    } else return {};
}

inline auto Component_focusborder_68::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_68.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_68.accessible_role(index - 0);
    } else return {};
}

inline auto Component_focusborder_68::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->focusborder_68.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_68.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_focusborder_68::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->focusborder_68.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_68.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_focusborder_68::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_68.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_68.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_focusborder_68::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->focusborder_68.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->focusborder_68.element_infos(index - 0);
    } else return {};
}

inline auto Component_focusborder_68::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_focusborder_68*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_focusborder_68*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_focusborder_68::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_focusborder_68::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_focusborder_68::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_focusborder_68::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_focusborder_68::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_focusborder_68*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 3 };
}

inline auto Component_focusborder_68::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_focusborder_68::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_focusborder_68::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_focusborder_68::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_68, focusborder_68) +  offsetof(FocusBorder_root_4, root_4) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_68, focusborder_68) +  offsetof(FocusBorder_root_4, rectangle_5) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_focusborder_68::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_focusborder_68*>(component.instance)->layout_info(o);
}

inline auto Component_focusborder_68::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_focusborder_68*>(component.instance)->item_geometry(index);
}

inline auto Component_focusborder_68::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_focusborder_68*>(component.instance)->accessible_role(index);
}

inline auto Component_focusborder_68::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_focusborder_68*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_focusborder_68::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_focusborder_68*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_focusborder_68::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_focusborder_68*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_focusborder_68::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_focusborder_68::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_focusborder_68*>(component.instance)->globals->window().window_handle();
}

inline auto Component_focusborder_68::create (class Button_root_58 const * parent) -> slint::ComponentHandle<Component_focusborder_68>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_68>::make();
    auto self = const_cast<Component_focusborder_68 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_focusborder_68>{ self_rc };
}

inline Component_focusborder_68::~Component_focusborder_68 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_focusborder_68::init () -> void{
    user_init();
}

inline auto Component_focusborder_68::box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Button_root_58::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    slint::private_api::Property<bool>::link_two_way(&self->i_touch_area_66.enabled, &self->i_focus_scope_67.enabled);
    self->root_58_accessible_action_default.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->i_touch_area_66.clicked.call();
                    });
    self->root_58_has_focus.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->i_focus_scope_67.has_focus.get();
                        });
    self->root_58_i_background_59_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_58_width.get();
                        });
    self->root_58_i_layout_61_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 4> repeated_indices_array; std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });self->repeater_1.ensure_updated(self);repeated_indices_array[2] = cells_vector.size();repeated_indices_array[3] = self->repeater_1.len();self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, cells, [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), self->root_58_i_background_59_width.get(), 4),repeated_indices); }();
                        });
    self->root_58_i_layout_61_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Horizontal)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,4,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Center); }();
                        });
    self->root_58_i_layout_61_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{  std::vector<slint::cbindgen_private::BoxLayoutCellData> cells_vector;self->repeater_0.ensure_updated(self);self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); });self->repeater_1.ensure_updated(self);self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->box_layout_data(slint::cbindgen_private::Orientation::Vertical)); }); slint::cbindgen_private::Slice<slint::cbindgen_private::BoxLayoutCellData>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5)); }();
                        });
    self->root_58_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_4 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_4.max, layout_info_4.max_percent, std::max<float>(32, self->root_58_i_layout_61_layoutinfo_h.get().min), layout_info_4.min_percent, layout_info_4.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_58_i_layout_61_layoutinfo_h.get()));
                        });
    self->root_58_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_5 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_5.max, layout_info_5.max_percent, std::max<float>(32, self->root_58_i_layout_61_layoutinfo_v.get().min), layout_info_5.min_percent, layout_info_5.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->root_58_i_layout_61_layoutinfo_v.get()));
                        });
    self->root_58_pressed.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->i_focus_scope_67.enabled.get() && self->i_touch_area_66.pressed.get());
                        });
    self->root_58_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> float { if (! self->i_focus_scope_67.enabled.get()) { return 1; } else { return [&]() -> float { if (self->root_58_pressed.get()) { return 2; } else { return [&]() -> float { if (self->i_touch_area_66.has_hover.get()) { return 3; } else { return [&]() -> float { if (self->root_58_checked.get()) { return 4; } else { return 0; }}(); }}(); }}(); }}();
                        });
    self->root_58_text_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_58_state = self->root_58_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 1)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_58_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+2.281701375e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+1.593835519e9); } else { return slint::Color::from_argb_encoded(+1.577058304e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 2)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_58_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+2.147483648e9); } else { return slint::Color::from_argb_encoded(+3.019898879e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.388997631e9); } else { return slint::Color::from_argb_encoded(+2.566914048e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 4)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.27819008e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()); } else { return [&]() -> slint::Brush { if (self->root_58_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.27819008e9); } else { return slint::Color::from_argb_encoded(+4.294967295e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}()); }}(); }}(); }}(); }}(); }();
                        });
    self->i_background_59.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_58_state = self->root_58_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 1)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_58_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(704643071); } else { return slint::Color::from_argb_encoded(939524096); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(184549375); } else { return slint::Color::from_argb_encoded(+1.308228089e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 2)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_58_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.428896255e9); } else { return slint::Color::from_argb_encoded(+3.422576568e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(150994943); } else { return slint::Color::from_argb_encoded(+1.308228089e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 3)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_58_checked.get()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+3.865103871e9); } else { return slint::Color::from_argb_encoded(+3.858784184e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+2.163866105e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 4)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.284534271e9); } else { return slint::Color::from_argb_encoded(+4.278214584e9); }}()); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(268435455); } else { return slint::Color::from_argb_encoded(+3.019898879e9); }}()); }}(); }}(); }}(); }}(); }();
                        }, [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.iteration_count = a_4; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), 1));
    self->i_background_59.border_radius.set(4);
    self->i_border_60.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_58_state = self->root_58_state.get();;return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 1)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->root_58_checked.get()) { return slint::Brush(slint::Color::from_argb_encoded(0)); } else { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); }}(); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 2)) < std::numeric_limits<float>::epsilon()) { return slint::Brush([&]() -> slint::Color { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(352321535); } else { return slint::Color::from_argb_encoded(+1.92937984e9); }}()); } else { return [&]() -> slint::Brush { if (std::abs(float(tmp_root_58_state - 4)) < std::numeric_limits<float>::epsilon()) { return [&]() -> slint::Brush { if (self->globals->global_FluentPalette_76->dark_color_scheme.get()) { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(603979776), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }(); } else { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+1.711276032e9), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }(); }}(); } else { return self->globals->global_FluentPalette_76->control_border.get(); }}(); }}(); }}(); }();
                        });
    self->i_border_60.border_radius.set(4);
    self->i_border_60.border_width.set(1);
    self->i_touch_area_66.clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        [&]{ [&]() -> void { if (false) { self->root_58_checked.set((! self->root_58_checked.get())); } else { ; }}();self->root_58_clicked.call(); }();
                    });
    self->i_focus_scope_67.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return true;
                        });
    self->i_focus_scope_67.focus_on_click.set(true);
    self->i_focus_scope_67.focus_on_tab_navigation.set(true);
    self->i_focus_scope_67.key_pressed.set_handler(
                    [this]([[maybe_unused]] slint::private_api::KeyEvent arg_0) {
                        [[maybe_unused]] auto self = this;
                        return [&]() -> slint::cbindgen_private::EventResult { if (! ((arg_0.text == slint::SharedString(u8" ")) || (arg_0.text == slint::SharedString(u8"\n")))) { return slint::cbindgen_private::EventResult::Reject; } else { return [&]{ self->i_touch_area_66.clicked.call();return slint::cbindgen_private::EventResult::Accept; }(); }}();
                    });
    self->root_58_icon.set_constant();
    self->i_background_59.border_color.set_constant();
    self->i_background_59.border_radius.set_constant();
    self->i_background_59.border_width.set_constant();
    self->i_border_60.background.set_constant();
    self->i_border_60.border_radius.set_constant();
    self->i_border_60.border_width.set_constant();
    self->i_touch_area_66.mouse_cursor.set_constant();
    self->i_focus_scope_67.focus_on_click.set_constant();
    self->i_focus_scope_67.focus_on_tab_navigation.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return ((slint::Image().size().width > 0) && (slint::Image().size().height > 0)); });
    self->repeater_1.set_model_binding([self] { (void)self; return (self->root_58_text.get() != slint::SharedString(u8"")); });
    self->repeater_2.set_model_binding([self] { (void)self; return (self->root_58_has_focus.get() && self->i_focus_scope_67.enabled.get()); });
}

inline auto Button_root_58::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Button_root_58::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_58_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->root_58_i_layout_61_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_58_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->root_58_i_layout_61_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }();
}

inline auto Button_root_58::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_58_height.get()), float(self->root_58_width.get()), float(self->root_58_x.get()), float(self->root_58_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_58_height.get()), float(self->root_58_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_58_height.get()), float(self->root_58_width.get()), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_58_height.get()), float(0), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_58_height.get()), float(self->root_58_width.get()), float(0), float(0)));
    }
    return {};
}

inline auto Button_root_58::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Button;
    }
    return {};
}

inline auto Button_root_58::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return [&]() -> slint::SharedString { if (false) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return [&]() -> slint::SharedString { if (self->root_58_checked.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return [&]() -> slint::SharedString { if (self->i_focus_scope_67.enabled.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->root_58_text.get();
    }
    return {};
}

inline auto Button_root_58::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->root_58_accessible_action_default.call();
    }
    return ;
}

inline auto Button_root_58::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    return {};
}

inline auto Button_root_58::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Button_root_58::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.visit(order, visitor);
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.visit(order, visitor);
            } };
        std::abort();
}

inline auto Button_root_58::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                return self->repeater_1.index_range();
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                return self->repeater_2.index_range();
            } };
        std::abort();
}

inline auto Button_root_58::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.ensure_updated(self);
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                self->repeater_1.ensure_updated(self);
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            }
        case 2: {
                self->repeater_2.ensure_updated(self);
                *result = self->repeater_2.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline FluentPalette_76::FluentPalette_76 (const class SharedGlobals *globals)
 : globals(globals)
{
}

inline auto FluentPalette_76::init () -> void{
    (void)this->globals;
    this->background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (this->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.280032284e9); } else { return slint::Color::from_argb_encoded(+4.29463833e9); }}());
                        });
    this->color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return this->globals->window().window_handle().color_scheme();
                        });
    this->control_border.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]() -> slint::Brush { if (this->globals->global_FluentPalette_76->dark_color_scheme.get()) { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(402653183), float(0), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(301989888), float(0.0833), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }(); } else { return [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(251658240), float(0.9058), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(687865856), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }(); }}();
                        });
    this->dark_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_FluentPalette_76_color_scheme = this->globals->global_FluentPalette_76->color_scheme.get();;return [&]() -> bool { if (! (tmp_FluentPalette_76_color_scheme == slint::cbindgen_private::ColorScheme::Unknown)) { return (tmp_FluentPalette_76_color_scheme == slint::cbindgen_private::ColorScheme::Dark); } else { return (this->globals->window().window_handle().color_scheme() == slint::cbindgen_private::ColorScheme::Dark); }}(); }();
                        });
    this->foreground.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush([&]() -> slint::Color { if (this->globals->global_FluentPalette_76->dark_color_scheme.get()) { return slint::Color::from_argb_encoded(+4.294967295e9); } else { return slint::Color::from_argb_encoded(+3.85875968e9); }}());
                        });
}

inline const slint::private_api::ItemTreeVTable AppWindow::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<AppWindow>, slint::private_api::dealloc };

inline auto AppWindow::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->choices_72.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 1 - 1, tree_index_of_first_child + 4 - 1);
    this->button_73.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 2 - 1, tree_index_of_first_child + 11 - 1);
    self->root_70.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_76->background.get();
                        });
    self->root_70_empty_71_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::private_api::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 3>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->choices_72.root_6_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->choices_72.root_6_layout_9_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_73.root_58_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_73.root_58_i_layout_61_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_74), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1)) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), 140, 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->root_70_empty_71_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 3>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->choices_72.root_6_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(160, self->choices_72.root_6_layout_9_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_73.root_58_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_73.root_58_i_layout_61_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_74), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12));
                        });
    self->root_70_empty_71_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::BoxLayoutCellData>(std::array<slint::cbindgen_private::BoxLayoutCellData, 3>{ slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->choices_72.root_6_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->choices_72.root_6_layout_9_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->button_73.root_58_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->button_73.root_58_i_layout_61_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::BoxLayoutCellData ( [&](const auto &a_0){ slint::private_api::BoxLayoutCellData o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->text_74), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1)) ) }.data(), 3),10,[&](const auto &a_0, const auto &a_1){ slint::private_api::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->root_70.height.set(140);
    self->root_70_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_70), slint::cbindgen_private::Orientation::Horizontal, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + self->root_70_empty_71_layoutinfo_h.get());
                        });
    self->root_70_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->root_70), slint::cbindgen_private::Orientation::Vertical, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + self->root_70_empty_71_layoutinfo_v.get());
                        });
    self->root_70.title.set(slint::SharedString(u8"Launch Freecad"));
    self->root_70.width.set(360);
    self->choices_72.root_6_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_70_empty_71_layout_cache.get()[1];
                        });
    self->choices_72.base_7.root_1_model.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_70_freecads.get();
                        });
    self->choices_72.root_6_width.set(336);
    self->choices_72.root_6_x.set(12);
    self->choices_72.root_6_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_70_empty_71_layout_cache.get()[0];
                        });
    self->button_73.root_58_clicked.set_handler(
                    [this]() {
                        [[maybe_unused]] auto self = this;
                        self->root_70_launch_freecad.call(self->choices_72.base_7.root_1_current_value.get());
                    });
    self->button_73.root_58_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_70_empty_71_layout_cache.get()[3];
                        });
    self->button_73.root_58_text.set(slint::SharedString(u8"Launch"));
    self->button_73.root_58_width.set(336);
    self->button_73.root_58_x.set(12);
    self->button_73.root_58_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_70_empty_71_layout_cache.get()[2];
                        });
    self->text_74.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_76->foreground.get();
                        });
    self->text_74.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->root_70_empty_71_layout_cache.get()[5];
                        });
    self->text_74.text.set(slint::SharedString(u8"Selected: "));
    self->text_74.width.set(336);
    self->root_70.always_on_top.set_constant();
    self->root_70.default_font_family.set_constant();
    self->root_70.default_font_weight.set_constant();
    self->root_70.icon.set_constant();
    self->root_70.no_frame.set_constant();
    self->root_70.resize_border_width.set_constant();
    self->root_70.title.set_constant();
    self->choices_72.root_6_width.set_constant();
    self->choices_72.root_6_x.set_constant();
    self->button_73.root_58_icon.set_constant();
    self->button_73.root_58_text.set_constant();
    self->button_73.root_58_width.set_constant();
    self->button_73.root_58_x.set_constant();
    self->text_74.font_size.set_constant();
    self->text_74.font_weight.set_constant();
    self->text_74.horizontal_alignment.set_constant();
    self->text_74.text.set_constant();
    self->text_74.vertical_alignment.set_constant();
    self->text_74.width.set_constant();
}

inline auto AppWindow::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->choices_72.user_init();
    this->button_73.user_init();
}

inline auto AppWindow::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->root_70_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(360, layout_info.max_percent, 360, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = self->root_70_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::private_api::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(140, layout_info.max_percent, 140, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto AppWindow::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(140), float(360), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_70_empty_71_layout_cache.get()[1]), float(336), float(12), float(self->root_70_empty_71_layout_cache.get()[0])));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_70_empty_71_layout_cache.get()[3]), float(336), float(12), float(self->root_70_empty_71_layout_cache.get()[2])));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->root_70_empty_71_layout_cache.get()[5]), float(336), float(12), float(self->root_70_empty_71_layout_cache.get()[4])));
    }
    if (index == 1) {
        return self->choices_72.item_geometry(0);
    } else if (index >= 4 && index < 11) {
        return self->choices_72.item_geometry(index - 3);
    } else if (index == 2) {
        return self->button_73.item_geometry(0);
    } else if (index >= 11 && index < 18) {
        return self->button_73.item_geometry(index - 10);
    } else return {};
}

inline auto AppWindow::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::AccessibleRole::Combobox;
        case 2: return slint::cbindgen_private::AccessibleRole::Button;
        case 3: return slint::cbindgen_private::AccessibleRole::Text;
    }
    if (index == 1) {
        return self->choices_72.accessible_role(0);
    } else if (index >= 4 && index < 11) {
        return self->choices_72.accessible_role(index - 3);
    } else if (index == 2) {
        return self->button_73.accessible_role(0);
    } else if (index >= 11 && index < 18) {
        return self->button_73.accessible_role(index - 10);
    } else return {};
}

inline auto AppWindow::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return [&]() -> slint::SharedString { if (self->choices_72.base_7.i_focus_scope_2.enabled.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Expandable): return [&]() -> slint::SharedString { if (true) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Expanded): return [&]() -> slint::SharedString { if (self->choices_72.base_7.root_1_popup_has_focus.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Value): return self->choices_72.base_7.root_1_current_value.get();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return [&]() -> slint::SharedString { if (false) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return [&]() -> slint::SharedString { if (self->button_73.root_58_checked.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return [&]() -> slint::SharedString { if (self->button_73.i_focus_scope_67.enabled.get()) { return slint::SharedString(u8"true"); } else { return slint::SharedString(u8"false"); }}();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->button_73.root_58_text.get();
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Selected: ");
    }
    if (index == 1) {
        return self->choices_72.accessible_string_property(0, what);
    } else if (index >= 4 && index < 11) {
        return self->choices_72.accessible_string_property(index - 3, what);
    } else if (index == 2) {
        return self->button_73.accessible_string_property(0, what);
    } else if (index >= 11 && index < 18) {
        return self->button_73.accessible_string_property(index - 10, what);
    } else return {};
}

inline auto AppWindow::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Expand): return self->choices_72.root_6_accessible_action_expand.call();
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->button_73.root_58_accessible_action_default.call();
    }
    if (index == 1) {
        return self->choices_72.accessibility_action(0, action);
    } else if (index >= 4 && index < 11) {
        return self->choices_72.accessibility_action(index - 3, action);
    } else if (index == 2) {
        return self->button_73.accessibility_action(0, action);
    } else if (index >= 11 && index < 18) {
        return self->button_73.accessibility_action(index - 10, action);
    } else return ;
}

inline auto AppWindow::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::SupportedAccessibilityAction_Expand;
        case 2: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    if (index == 1) {
        return self->choices_72.supported_accessibility_actions(0);
    } else if (index >= 4 && index < 11) {
        return self->choices_72.supported_accessibility_actions(index - 3);
    } else if (index == 2) {
        return self->button_73.supported_accessibility_actions(0);
    } else if (index >= 11 && index < 18) {
        return self->button_73.supported_accessibility_actions(index - 10);
    } else return {};
}

inline auto AppWindow::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 1) {
        return self->choices_72.element_infos(0);
    } else if (index >= 4 && index < 11) {
        return self->choices_72.element_infos(index - 3);
    } else if (index == 2) {
        return self->button_73.element_infos(0);
    } else if (index >= 11 && index < 18) {
        return self->button_73.element_infos(index - 10);
    } else return {};
}

inline auto AppWindow::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0:  {
                        return self->choices_72.visit_dynamic_children(dyn_index - 0, order, visitor);
                    }
        case 1: case 2: case 3:  {
                        return self->button_73.visit_dynamic_children(dyn_index - 1, order, visitor);
                    } };
        std::abort();
}

inline auto AppWindow::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0:  {
                        return self->choices_72.subtree_range(dyn_index - 0);
                    }
        case 1: case 2: case 3:  {
                        return self->button_73.subtree_range(dyn_index - 1);
                    } };
        std::abort();
}

inline auto AppWindow::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0:  {
                        self->choices_72.subtree_component(dyn_index - 0, subtree_index, result);
                        return;
                    }
        case 1: case 2: case 3:  {
                        self->button_73.subtree_component(dyn_index - 1, subtree_index, result);
                        return;
                    } };
        std::abort();
}

inline auto AppWindow::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const AppWindow*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const AppWindow*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto AppWindow::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto AppWindow::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const AppWindow*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto AppWindow::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const AppWindow*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto AppWindow::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto AppWindow::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto AppWindow::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto AppWindow::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto AppWindow::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(3, 1, 0, 0, false), 
slint::private_api::make_item_node(3, 4, 0, 1, true), 
slint::private_api::make_item_node(4, 11, 0, 2, true), 
slint::private_api::make_item_node(0, 18, 0, 3, true), 
slint::private_api::make_item_node(1, 7, 1, 4, false), 
slint::private_api::make_item_node(2, 9, 1, 5, false), 
slint::private_api::make_dyn_node(0, 1), 
slint::private_api::make_item_node(1, 8, 4, 6, false), 
slint::private_api::make_item_node(0, 9, 7, 7, false), 
slint::private_api::make_item_node(0, 11, 5, 8, false), 
slint::private_api::make_item_node(0, 11, 5, 9, false), 
slint::private_api::make_item_node(3, 15, 2, 10, false), 
slint::private_api::make_item_node(0, 18, 2, 11, false), 
slint::private_api::make_item_node(0, 18, 2, 12, false), 
slint::private_api::make_dyn_node(3, 2), 
slint::private_api::make_item_node(0, 18, 11, 13, false), 
slint::private_api::make_dyn_node(1, 11), 
slint::private_api::make_dyn_node(2, 11) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto AppWindow::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(AppWindow, root_70) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(AppWindow, choices_72) +  offsetof(ComboBox_root_6, root_6) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(AppWindow, button_73) +  offsetof(Button_root_58, root_58) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(AppWindow, text_74) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(AppWindow, choices_72) + offsetof(ComboBox_root_6, base_7) +  offsetof(ComboBoxBase_root_1, root_1) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(AppWindow, choices_72) +  offsetof(ComboBox_root_6, background_8) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(AppWindow, choices_72) + offsetof(ComboBox_root_6, base_7) +  offsetof(ComboBoxBase_root_1, i_focus_scope_2) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(AppWindow, choices_72) + offsetof(ComboBox_root_6, base_7) +  offsetof(ComboBoxBase_root_1, i_touch_area_3) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(AppWindow, choices_72) +  offsetof(ComboBox_root_6, text_10) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable), offsetof(AppWindow, choices_72) +  offsetof(ComboBox_root_6, icon_11) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(AppWindow, button_73) +  offsetof(Button_root_58, i_background_59) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(AppWindow, button_73) +  offsetof(Button_root_58, i_touch_area_66) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(AppWindow, button_73) +  offsetof(Button_root_58, i_focus_scope_67) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(AppWindow, button_73) +  offsetof(Button_root_58, i_border_60) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto AppWindow::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const AppWindow*>(component.instance)->layout_info(o);
}

inline auto AppWindow::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const AppWindow*>(component.instance)->item_geometry(index);
}

inline auto AppWindow::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const AppWindow*>(component.instance)->accessible_role(index);
}

inline auto AppWindow::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const AppWindow*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto AppWindow::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const AppWindow*>(component.instance)->accessibility_action(index, *action);
}

inline auto AppWindow::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const AppWindow*>(component.instance)->supported_accessibility_actions(index);
}

inline auto AppWindow::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto AppWindow::window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const AppWindow*>(component.instance)->globals->window().window_handle();
}

inline auto AppWindow::create () -> slint::ComponentHandle<AppWindow>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, AppWindow>::make();
    auto self = const_cast<AppWindow *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    self->user_init();
    self->window();
    return slint::ComponentHandle<AppWindow>{ self_rc };
}

inline AppWindow::~AppWindow (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto AppWindow::get_freecads () const -> std::shared_ptr<slint::Model<slint::SharedString>>{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->root_70_freecads.get();
}

inline auto AppWindow::set_freecads (const std::shared_ptr<slint::Model<slint::SharedString>> &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_70_freecads.set(value);
}

inline auto AppWindow::invoke_launch_freecad (slint::SharedString arg_0) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->root_70_launch_freecad.call(arg_0);
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_launch_freecad (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_70_launch_freecad.set_handler(std::forward<Functor>(callback_handler));
}

inline auto AppWindow::show () -> void{
    window().show();
}

inline auto AppWindow::hide () -> void{
    window().hide();
}

inline auto AppWindow::window () const -> slint::Window&{
    return m_globals.window();
}

inline auto AppWindow::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
