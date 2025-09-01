main: main.c status.h student.h
	gcc -Wall  main.c -o main

clean:
	rm -f main
