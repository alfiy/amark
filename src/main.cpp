// main.c

#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("AMarkdown markdown Edition");
    window.resize(800, 600);             // 设置窗口大小
    window.show();                       // 显示主窗口

    return app.exec();
}

