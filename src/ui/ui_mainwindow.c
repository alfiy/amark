// // ui_mainwindow.c

// #include "ui_mainwindow.h"
// #include "ui_editor.h"
// #include "ui_preview.h"
// #include "file_manager.h"
// #include "outline.h"
// #include "theme_manager.h"

// MainWindow* ui_mainwindow_create() {
//     MainWindow *mw = malloc(sizeof(MainWindow));
    
//     // 创建主窗口对象, 设置基本属性
//     mw->window = gui_create_window("Typora C Edition");

//     // 创建左侧文件树
//     mw->file_tree = file_manager_create_treeview();

//     // 创建编辑器区（Markdown输入）
//     mw->editor = ui_editor_create();

//     // 创建右侧预览区（Markdown实时渲染后的内容）
//     mw->preview = ui_preview_create();

//     // 创建大纲导航栏
//     mw->outline = outline_create();

//     // 布局：左侧文件树，中央编辑器，右侧预览，大纲（横纵分割）
//     gui_window_add_sidebar(mw->window, mw->file_tree);
//     gui_window_add_main_panel(mw->window, mw->editor);
//     gui_window_add_right_panel(mw->window, mw->outline);
//     gui_window_add_right_panel(mw->window, mw->preview);

//     // 信号连接：编辑区内容变更时，自动刷新预览和大纲
//     editor_on_change(mw->editor, on_editor_content_change);

//     return mw;
// }

// // 编辑器内容变动的回调
// void on_editor_content_change(const char* new_content) {
//     char *html = md_render(new_content);      // Markdown 转 HTML
//     ui_preview_update(html);                  // 刷新预览区
//     outline_update(new_content);              // 刷新大纲区
// }
