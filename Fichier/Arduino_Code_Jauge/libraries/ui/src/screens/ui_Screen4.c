// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.3
// Project name: EmuBlue2Gauge

#include "../ui.h"

void ui_Screen4_screen_init(void)
{
ui_Screen4 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image5 = lv_img_create(ui_Screen4);
lv_img_set_src(ui_Image5, &ui_img_afr_png);
lv_obj_set_width( ui_Image5, LV_SIZE_CONTENT);  /// 210
lv_obj_set_height( ui_Image5, LV_SIZE_CONTENT);   /// 210
lv_obj_set_align( ui_Image5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image5, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_Image5,380);

lv_obj_add_event_cb(ui_Screen4, ui_event_Screen4, LV_EVENT_ALL, NULL);

}
