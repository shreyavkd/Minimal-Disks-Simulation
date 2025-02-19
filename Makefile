COMPILER= g++
COMPILERFLAGS = -Wall -std=c++11
OBJECT= main.o system.o disk.o
EXECUTABLE= simulation

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT)
	$(COMPILER) $(COMPILERFLAGS) $(OBJECT) -o $(EXECUTABLE)

%.o: %.cpp
	$(COMPILER) $(COMPILERFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT) $(EXECUTABLE) 

run: $(EXECUTABLE)
	./$(EXECUTABLE)
