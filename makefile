all : Shell


Shell : LineParser.o Shell.o
	gcc -o -g LineParser.o Shell.o

LineParser.o : LineParser.c LineParser.h
	gcc -c -g LineParser.c

Shell.o : Shell.c
	gcc -c -g Shell.c

clean:
	rm *.o
