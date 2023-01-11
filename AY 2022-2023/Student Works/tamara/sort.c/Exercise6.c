#include<stdio.h>

void swap_v(int *a, int *b){
	
	int tmp=*a;
	*a=*b;
	*b=tmp;

}
int main(){
	int a=4, b=5;
	printf("a=%d b=%d,\n", a,b );
	swap_v(&a, &b);
	printf("*a=%d b=%d \n", a,b);
}