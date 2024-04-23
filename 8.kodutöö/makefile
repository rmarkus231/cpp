MAIN := kodu8.cpp
SOURCES = andmed.cpp
EXEC := main
CXX := g++
CXXFLAGS := -g -std=c++20 -Wall -Wpedantic -Werror -O2

$(EXEC): $(MAIN) $(SOURCES)
	clear
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(MAIN) $(SOURCES)

r: $(EXEC)
	./$(EXEC) 

c: $(EXEC)
	rm $(EXEC)

