#include <stdio.h>
void swapValue(int *x, int *y, int *z);
void swapArray(int x[], int y[], int size); 
void printArray(int x[],int size);


int main() {
    int a = 1, b = 2, c = 3;
    int A[3] = {1,2,3},B[3] = {4,5,6};
    int Size = sizeof(A)/sizeof(A[0]);
    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue(&a,&b,&c);
    printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
    
    printf("Before A swap array: ");
    printArray(A,Size);
    printf("\nBefore B swap array: ");
    printArray(B,Size);
    swapArray(A,B,Size);
    printf("\nAfter A swap array: ");
    printArray(A,Size);
    printf("\nAfter B swap array: ");
    printArray(B,Size);

}


void printArray(int x[],int size){
	for(int i=0;i<size;i++){
	printf("%d ",x[i]);
	}
}
void swapValue(int *x, int *y, int *z){
	int t;
	t = *x;
	*x = *y;
	*y = *z;
	*z = t;
	
}

void swapArray(int x[], int y[], int size){
	int temp;
	for(int i=0;i<size;i++){
		temp = x[i];
		x[i] = y[i];
		y[i] = temp;
	}
}