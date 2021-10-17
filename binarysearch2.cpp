#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main(){
	int n,search,mid;
	bool found = false;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	int a[n];
	printf("\nenter the sorted array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("\nto search : ");
	scanf("%d",&search);
	int lI=0,uI=n-1;
	while(lI<=uI){
		mid = (lI+uI)/2;
		if(search == a[mid]){
			found = true;
			break;
		}
		else if(search < a[mid]){
			uI = mid-1;
		}
		else{
			lI = mid+1;
		}
	}
	if(found) 
	printf("\n%d is found at index no. %d",search,mid);
	else
	printf("\n%d is not found",search);
	



}
