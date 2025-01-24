# compiler
CXX = clang++

# minimum required compiler
# CXXFLAGS := -std=c++2b -Wall -O3
CXXFLAGS := -std=c++2b -Wall -O3 -march=native
# CXXFLAGS := -std=c++2b -Wall -Ofast

# executable name
TARGET = test

# source files
SRC = test.cpp

# default target
all: $(TARGET)

# # run generate.sh
# generate:
# 	bash generate.sh

# create executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# clean
clean:
	rm -f $(TARGET)

# declare phony targets
.PHONY: all clean generate
