# cmake ApkInstaller.
# Author : tk-aria
#
# Document1 : https://qiita.com/nonbiri15/items/c77c046f0e10f8140cfe 
# Document2 : https://qiita.com/m_mizutani/items/06b46d4cebc0a6c2f704



cmake_minimum_required(VERSION 2.8)

add_difinitions(-std=c++11)

add_executable(ApkInstaller main.cpp)


# ソリューションファイルの名前を指定する
project( aviDetector )

# 次の行を追加するとMinSizeRelとRelWithDebInfoの選択肢を生成することが抑制できます。
SET(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "limited configs" FORCE)

#次の行を追加すると-DWITH_SOMELIBをコンパイルオプション指定できる。
add_definitions(-DWITH_SOMELIB)

# OpenCVのパッケージを探す
find_package(OpenCV REQUIRED)

find_package(PythonLibs REQUIRED)

# OpenCVが見つかった場合のみ設定を行う
if(OpenCV_FOUND)
  # インクルードパスを指定
  include_directories(${OpenCV_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})

  # リンクするライブラリ指定
  target_link_libraries(aviDetector ${OpenCV_LIBS} ${PYTHON_LIBRARIES})
endif(OpenCV_FOUND)

# ジェネレーターから分岐 .
if(CMAKE_GENERATOR MATCHES "MinGW")

# OS Dependence .
if(WIN32)
add_definitions(-D_UNICODE)
if(APPLE)
if(UNIX)

FILE(GLOB BASESRCS "src/*.cc" "src/*.h")
ADD_EXECUTABLE(myapp ${BASESRCS})
