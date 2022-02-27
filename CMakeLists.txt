# CMakeList.txt: CPPPrimer 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("CPPPrimer")

aux_source_directory(./src DIR_SRC)

# 将源代码添加到此项目的可执行文件。
add_executable (CPPPrimer ${DIR_SRC})


add_executable(chapter_19_3 ./src/19_specialized_tools_and_techniques/19_3.cpp)

# TODO: 如有需要，请添加测试并安装目标。
