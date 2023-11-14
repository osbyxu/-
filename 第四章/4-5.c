#include <unistd.h>
#include <stdio.h>

int main(){
	char c;
	read(0,&c,1);
	printf("%c\n",c);
	return 0;
}
