MAIN := main.cpp
SOURCES = 6prak.cpp
EXEC := main
CXX := g++
CXXFLAGS := -g -std=c++20 -Wall -Wpedantic -Werror -O2

$(EXEC): $(MAIN) $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(MAIN) $(SOURCES)

r: $(EXEC)
	./$(EXEC) 

c: $(EXEC)
	rm $(EXEC)

