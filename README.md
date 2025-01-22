﻿# 项目简介
一个项目如果没有很好的模块化组织，在经过不断地迭代开发以后很容易变得臃肿甚至成为"屎山代码"。

该项目是一个使用CMake构建C++项目的实例，通过本项目你可以学习到如何有效地组织C++文件和编写CMakeLists.txt，每个文件都配备了较为完善的注释以供学习

当然关于文件目录的组织每个人都有自己的偏好，你可以结合自己的喜好形成自己的文件目录组织风格

# 文件夹解释
docs 文件夹存储项目文档，项目文档可以通过doxygen等工具生成

include 文件夹存放公共头文件

lib 文件夹存放各个模块编译后得到的库文件

src 文件夹存放 main.cpp 文件和各个模块的源文件

tests 文件夹存放测试文件，使用 GoogleTest

# 文件解释:
.clang-format 文件定义代码的格式化规则

其余文件有 git、cmake 的配置文件，README 文件和许可证信息
