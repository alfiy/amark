// // ui_editor.c

// #include "ui_editor.h"

// Editor* ui_editor_create() {
//     Editor *ed = malloc(sizeof(Editor));
    
//     // 用 Qt 方案为例：创建 QTextEdit 富文本输入区
//     ed->text_edit = gui_create_text_edit();
    
//     // 绑定键盘事件（或文本变更信号）
//     gui_text_edit_on_text_changed(ed->text_edit, editor_text_changed_callback);

//     return ed;
// }

// // 编辑区内容变更时的信号回调（通知主窗口/预览区）
// void editor_text_changed_callback(Editor* ed, const char* new_content) {
//     // 调用主窗口 on_editor_content_change（可以用事件系统或直接调用）
//     mainwindow_notify_content_change(new_content);
// }
