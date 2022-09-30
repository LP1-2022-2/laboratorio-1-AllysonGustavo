#SEU MAKEFILE

PROG = geometria
CC = g++
FLAGS  = -Wall -pedantic -Iinclude

$(PROG): main.o espacialArea.o espacialVolume.o planoArea.o planoPerimetro.o bin
	$(CC) $(FLAGS) -o bin/$(PROG) main.o espacialArea.o espacialVolume.o planoArea.o planoPerimetro.o

main.o: src/main.cpp 
	$(CC) $(FLAGS) -c src/main.cpp

espacialArea.o: src/espacialArea.cpp
	$(CC) $(FLAGS) -c src/espacialArea.cpp

espacialVolume.o: src/espacialVolume.cpp
	$(CC) $(FLAGS) -c src/espacialVolume.cpp

planoArea.o: src/planoArea.cpp
	$(CC) $(FLAGS) -c src/planoArea.cpp

planoPerimetro.o: src/planoPerimetro.cpp
	$(CC) $(FLAGS) -c src/planoPerimetro.cpp

clean:
	rm *.o $(PROG)

bin: 
	mkdir -p bin