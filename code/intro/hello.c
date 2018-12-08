/* $begin hello */
#include <stdio.h>

int test(){
	int res = 0;
	for(int i = 0; i < 5; ++i){
		res += i;
	}
	return res;
}

int main() 
{
	int testRes = test();
	printf("test result: %d\n", testRes);
    printf("hello, world\n");
    return 0;
}
/* $end hello */

