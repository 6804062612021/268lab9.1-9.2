#include <stdio.h>

void swapValue(int *a, int *b, int *c);


int main() {
	int a = 1, b = 2, c = 3;
	printf("SwapValue function\n");
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a,&b,&c);
	printf("After swap function: a=%d, b=%d, c=%d\n", a, b, c);
}

void swapValue(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
