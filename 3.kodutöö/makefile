MAIN := main.cpp 
SOURCES = kodu3_fun_def.cpp
EXEC := main
CXX := g++
CXXFLAGS := -g -std=c++20 -Wall -Wpedantic -Werror -O2

$(EXEC): $(MAIN) $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(MAIN) $(SOURCES)

r: $(EXEC)
	./$(EXEC) -otsi=text test text

c: $(EXEC)
	rm $(EXEC)

