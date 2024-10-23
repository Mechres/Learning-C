#include <stdio.h>

int main(){
	int x = 42;
	int * x_Ptr = &x;
	printf("\nx = %d", x);
	
	printf("\nx_Ptr = %d \n", x_Ptr);

	return 0;
}
