MAIN := main.cpp
SOURCES = arvud.cpp toit.cpp
EXEC := main
CXX := g++
CXXFLAGS := -g -std=c++20 -Wall -Wpedantic -Werror -O2

$(EXEC): $(MAIN) $(SOURCES)
	clear
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(MAIN) $(SOURCES)

r: $(EXEC)
	clear
	./$(EXEC) 

c: $(EXEC)
	rm $(EXEC)

g: $(EXEC)
	gdb ./$(EXEC) ./core_dump
