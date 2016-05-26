#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
	int birth, age;
	p("\n Enter birth year:");
	s("%d", &birth);
	age=2016-birth;
	p("\n Your age is %d", age);
	
	return 0;	
	
	
}
