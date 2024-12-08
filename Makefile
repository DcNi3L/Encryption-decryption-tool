# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Directories
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# Source and Header Files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEPS = $(wildcard $(INC_DIR)/*.h)

# Output Binary
TARGET = $(BUILD_DIR)/encryption_tool

# Build Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(DEPS)
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
