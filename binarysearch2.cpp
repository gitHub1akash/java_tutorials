#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main(){
	int n,key,mid;
	bool found = false;
	//added elements of arrays
	printf("enter the number of elements in the array : ");
	scanf("%d",&n);
	
	int a[n];
	//added sortedarray elements
	printf("\n : enter the sorted array: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("\nto key: ");
	scanf("%d",&key);
	int lI=0,uI=n-1;
	while(lI<=uI){
		mid = (lI+uI)/2;
		if(key == a[mid]){
			found = true;
			break;
		}
		else if(key < a[mid]){
			uI = mid-1;
		}
		else{
			lI = mid+1;
		}
	}
	if(found) 
	printf("\n%d is found at index no. %d",key,mid);
	else
	printf("\n%d is not found",key);
	



}
