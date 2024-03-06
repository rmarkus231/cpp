MAIN := main.cpp 
SOURCES =
EXEC := main
CXX := g++
CDXFLAGS := -g -std=c++20 -Wall -Wpedantic -Werror -O2
CXXFLAGS := -g -std=c++20

$(EXEC): $(MAIN) $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(MAIN) $(SOURCES)

r: $(EXEC)
	./$(EXEC) 

c: $(EXEC)
	rm $(EXEC)

