cmake_minimum_required(VERSION 3.10)
project(GTestDemo)

# 開啟測試功能
enable_testing()

# 使用 GoogleTest（已安裝過）
find_package(GTest REQUIRED)
include_directories(inc)

# 加入程式與測試檔案
add_executable(calculator_test
  src/calculator.cpp
  tests/calculator_test.cpp
)

# 連結 GoogleTest 與 pthread
target_link_libraries(calculator_test GTest::gtest GTest::gtest_main pthread)

# 建立 test 任務
add_test(NAME CalculatorTests COMMAND calculator_test)

