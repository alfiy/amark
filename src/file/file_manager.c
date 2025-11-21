// FileTree* file_manager_create_treeview() {
//     // 用Qt/Gtk文件模型展示目录树
//     FileTree *tree = file_tree_new();
//     file_tree_load(tree, config.workspace_path);
//     return tree;
// }

// bool file_manager_save(const char* path, const char* content) {
//     FILE *fp = fopen(path, "w");
//     if (!fp) return false;
//     fwrite(content, sizeof(char), strlen(content), fp);
//     fclose(fp);
//     return true;
// }
