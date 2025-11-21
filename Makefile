# 项目根目录下 Makefile
TARGET = amark

# 源文件目录和头文件目录
SRC = src
INC = include

# 查找所有 CPP 源文件
SRCS = $(wildcard $(SRC)/*.cpp)
OBJS = $(SRCS:.cpp=.o)

# Qt 必要参数
QT_CFLAGS = $(shell pkg-config --cflags Qt5Widgets)
QT_LIBS = $(shell pkg-config --libs Qt5Widgets)

CC = g++
CFLAGS = -fPIC -I$(INC) $(QT_CFLAGS) -Wall -g
LDFLAGS = $(QT_LIBS)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC)/*.o $(TARGET)
