#include "stdio.h"


int main()
{
// Debut du code
int a,b;
char c,d;


c=32;d=42;
for(a=10; a>0; a--){
	for(b=a;b>0;b--){
		printf("%c",c);
	}
	printf("%c \n", d);
}
	return 0;	
		
// Fin du code
}
