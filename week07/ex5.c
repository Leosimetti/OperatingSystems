#include <stdio.h>
#include <stdlib.h>

int main() {

	 //Just so there is actually a reason to have a 2d array
	char **s = (char**) malloc(sizeof(char*));
	char foo[] = "Hello World";

	*s = foo;
	printf("s is %s\n", *s);	
	

	s[0] = foo;
	printf("s[0] is %s\n",s[0]);
	
	return 0;
} 