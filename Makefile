COMPILER= g++
OBJECT= main.o system.o disk.o
EXECUTABLE= simulation

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT)
	$(COMPILER) $(OBJECT) -o $(EXECUTABLE)

%.o: %.cpp
	$(COMPILER) -c $< -o $@

clean:
	rm -f $(OBJECT) $(EXECUTABLE) 

run: $(EXECUTABLE)
	./$(EXECUTABLE)
