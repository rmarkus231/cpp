MAIN := main.cpp 
SOURCES := 
EXEC := main
CXX := g++
CXXFLAGS := -g -std=c++20 

$(EXEC): $(MAIN)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(MAIN) $(SOURCES)

run: $(EXEC)
	./$(EXEC)

