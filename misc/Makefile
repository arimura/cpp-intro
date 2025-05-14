CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = std_test
SRCS = StdDest.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run