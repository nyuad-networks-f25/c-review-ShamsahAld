main: main.c status.h
	gcc -Wall  main.c -o main

clean:
	rm -f main
