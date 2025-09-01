#include <stdio.h>
#include <stdbool.h>
#include "status.h"
#include "student.h"

int main(){
	student_t s;
	s.name = "Shamsah";
	printf("%d\n", ENROLLED);
	printf("%s is %s\n", s.name, s.status ? "enrolled" : "not enrolled");
	return 0;
}

