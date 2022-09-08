#SEU MAKEFILE

PROG = lab1
CC = g++
FLAGS  = -Wall -pedantic -Iinclude

$(PROG): main.o espacialArea.o espacialVolume.o planoArea.o planoPerimetro.o
	$(CC) $(FLAGS) -o $(PROG) main.o espacialArea.o espacialVolume.o planoArea.o planoPerimetro.o

main.o: src/main.cpp 
	$(CC) $(FLAGS) -c scr/main.cpp

espacialArea.o: scr/espacialArea.cpp
	$(CC) $(FLAGS) -c scr/espacialArea.cpp

espacialVolume.o: scr/espacialVolume.cpp
	$(CC) $(FLAGS) -c scr/espacialVolume.cpp

planoArea.o: scr/planoArea.cpp
	$(CC) $(FLAGS) -c scr/planoArea.cpp

planoPerimetro.o: scr/planoPerimetro.cpp
	$(CC) $(FLAGS) -c scr/planoPerimetro.cpp

clean:
	rm *.o $(PROG)