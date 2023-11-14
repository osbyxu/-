#include <stdio.h>

int main(){

	struct test{
	short s;
        char c;
        int i;
        long l;
        float f;
        long double d;
};
	int len = sizeof(struct test);
	printf("%d\n",len);
	return 0;
}
