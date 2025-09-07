main: main.c status.h student.h
	gcc -Wall -Wextra  main.c -o main

clean:
	rm -f main
