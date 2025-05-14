CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = std_test
SRCS = StdTest.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)

test: $(TARGET)
	./$(TARGET)

.PHONY: all clean test 