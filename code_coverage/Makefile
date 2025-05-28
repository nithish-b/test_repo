# Define paths
GTEST_DIR := ./lib/googletest
GTEST_BUILD_DIR := $(GTEST_DIR)/build
GTEST_LIB_DIR := $(GTEST_BUILD_DIR)/lib
GTEST_INCLUDE_DIR := $(GTEST_DIR)/googletest/include
GMOCK_INCLUDE_DIR := $(GTEST_DIR)/googlemock/include

# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -std=c++14 -I$(GTEST_INCLUDE_DIR) -I$(GMOCK_INCLUDE_DIR)
LDFLAGS := -L$(GTEST_LIB_DIR) -lgtest -lgtest_main -pthread

# Source files
SRC_FILES := ./src/calculator.cpp
TEST_FILES := ./test/calculator_test.cpp

# Executable name
TARGET := test_runner

.PHONY: all clean build run

$(TARGET): $(SRC_FILES) $(TEST_FILES)
	$(CXX) $(CXXFLAGS) $(SRC_FILES) $(TEST_FILES) $(LDFLAGS) -o $(TARGET)

all: clean run

build: $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

help:
	@echo "Makefile commands:"
	@echo "  make all    - Clean and run tests"
	@echo "  make build  - Build the test runner"
	@echo "  make run    - Run the test runner"
	@echo "  make clean  - Remove the test runner executable"
	@echo "  make help   - Show this help message"