MAIN := main.cpp 
SOURCES = kodu3_fun_def.cpp
EXEC := main
CXX := g++
CXXFLAGS := -g -std=c++20 

$(EXEC): $(MAIN) $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(MAIN) $(SOURCES)

r: $(EXEC)
	./$(EXEC)

c: $(EXEC)
	rm $(EXEC)

