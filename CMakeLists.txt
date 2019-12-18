# CMakeLists.txt
cmake_minimum_required(VERSION 3.2)

# ソリューションファイルの名前を指定する
project(CMake CXX)

# オプション設定.
add_definitions(-std=c++11)
#set(CMAKE_CXX_FLAGS "-02 -Wall")
set(CMAKE_USE_RELATIVE_PATHS ON)

# プラットフォーム固有設定.
#if()

# インクルードファイルの設定
set(INCLUDE_DIRECTORIES
    ${PROJECT_SOURCE_DIR}/Source/ThirdParty   # PROJECT_SOURCE_DIRは project()しているファイルのパス
) 
include_directories("${INCLUDE_DIRECTORIES}")

# ライブラリの設定(dll)
# set(LIBRARIES
#   
# )

# 
#add_library(apkInst SHARED Source/Private/dllMain.cxx)
#install(TARGETS apkInst RUNTIME DESTINATION bin)

# 
add_executable(ApkInstaller Source/Private/main.cpp)
#add_library(ApkInstaller Source/Private/main.cpp)

install(TARGETS ApkInstaller RUNTIME DESTINATION bin/OSX)


#  <Build Command>
#  compiler
# - cmake -G Xcode ${CMAKE_LISTS_TXT_PATH}
# - cmake -G "Visual Studio XXXX" ${CMAKE_LISTS_TXT_PATH}
# - cmake ${CMAKE_LISTS_TXT_PATH} # Makefile
#
# ex)
# cmake -DCMAKE_INSTALL_PREFIX=../Binary ../ -G Xcode
#
# install
# - cmake --build ./ --target install # make install と同じ
