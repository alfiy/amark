#!/bin/bash
# 用于Qt/C++项目编译与运行的脚本
set -e

TARGET="amark"
SRC="src/main.cpp"

show_help() {
    echo "用法: ./build.sh [选项]"
    echo ""
    echo "  --help      显示帮助信息"
    echo "  --clean     清除生成的可执行文件和临时.o文件"
    echo "  (无参数)    编译并运行 $TARGET 项目"
}

clean() {
    echo "====== 清理文件 ======"
    rm -f $TARGET src/*.o
    echo "已清理 $TARGET 和 src/*.o"
}

build_and_run() {
    echo "====== 编译 $SRC ======"
    g++ -fPIC $SRC -o $TARGET `pkg-config --cflags --libs Qt5Widgets`
    echo "====== 运行程序 ======"
    ./$TARGET
}

case "$1" in
    --help)
        show_help
        ;;
    --clean)
        clean
        ;;
    "" )
        build_and_run
        ;;
    * )
        echo "未知参数: $1"
        show_help
        exit 1
        ;;
esac
