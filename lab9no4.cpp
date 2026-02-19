#include <stdio.h>

void swapValue(int *a, int *b, int *c);
void swapArray(int *a, int *b, int size);	//or void swapArray(int a[], int b[], int size);


int main() {
	int a = 1, b = 2, c = 3;
	printf("SwapValue function\n");
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a,&b,&c);
	printf("After swap function: a=%d, b=%d, c=%d\n", a, b, c);
	
	int N;
	printf("\nSwapArray function\n");
	printf("Input array size : ");
	scanf("%d",&N);
	int x1[N], x2[N];
	printf("Input numbers in array1 (n1 n2 n3 ...) : ");
	for(int i = 0;i<N;i++){
		scanf("%d",&x1[i]);
	}
	printf("Input numbers in array2 (n1 n2 n3 ...) : ");
	for(int i = 0;i<N;i++){
		scanf("%d",&x2[i]);
	}

	printf("\nBefore swap array\nx1 : ");
	for(int i = 0;i<N;i++){
		printf("%d ",x1[i]);
	}
	printf("\nx2 : ");
	for(int i = 0;i<N;i++){
		printf("%d ",x2[i]);
	}
	
	swapArray(&x1[0],&x2[0],N);
		printf("\n\nAfter swap array\nx1 : ");
	for(int i = 0;i<N;i++){
		printf("%d ",x1[i]);
	}
	printf("\nx2 : ");
	for(int i = 0;i<N;i++){
		printf("%d ",x2[i]);
	}
}

void swapValue(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void swapArray(int *a, int *b, int size){
	int temp;
	for(int i=0;i<size;i++){
		temp = *(a+i);
		*(a+i) = *(b+i);
		*(b+i) = temp;
	}
}
