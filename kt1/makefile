MAIN := main.cpp
SOURCES = fun1.cpp pank.cpp
EXEC := main
CXX := g++
CXXFLAGS := -g -std=c++20 -O2

$(EXEC): $(MAIN) $(SOURCES)
	clear
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(MAIN) $(SOURCES)

r: $(EXEC)
	./$(EXEC) 

c: $(EXEC)
	rm $(EXEC)

