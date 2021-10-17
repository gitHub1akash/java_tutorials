#include<stdio.h>
#include<conio.h>

int add(int arr[]);

int main(){
	int a[5],result;
	printf("Enter 5 elements\n");
	for(int i =0;i<=4;i++){
		scanf("%d",&a[i]);
	}
	
	result = add(a);
	printf("the sum of numbers = %d",result);
}

int add(int arr[]){
	int sum = 0;
	for(int i =0;i<=4;i++){
	sum = sum + arr[i];	
	}
	return sum;
}
