kernel: kernel.o modificatore_cavia/Modificatore_cavia.o Attivatore_cavia.o
	gcc -o kernel kernel.o Modificatore_cavia.o Attivatore_cavia.o

kernel.o:kernel.c modificatore_cavia/Modificatore_cavia.h Attivatore_cavia.h
	gcc -c kernel.c

Modificatore_cavia.o: ./modificatore_cavia/Modificatore_cavia.c ./modificatore_cavia/Modificatore_cavia.h
	gcc -c modificatore_cavia/Modificatore_cavia.c

Attivatore_cavia.o: Attivatore_cavia.c Attivatore_cavia.h
	gcc -c Attivatore_cavia.c