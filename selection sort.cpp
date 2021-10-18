#include<stdio.h>
#include<conio.h>
void main(){
	int n,minInd;
	clrscr();
	
	printf("Enter The Number Of Elements :\n ");
	scanf("%d",&n);
	printf("Enter The Elements :\n ");
	int a[n];
	for(int i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}	
	
	for(int i = 0; i<n-1; i=i+1) {	
		minInd = i;
		for(int j = i; j<n; j=j+1) {
			if (a[j] < a[minInd]) {					
				minInd = j;
			}
		}
		int temp = a[i];
		a[i] = a[minInd];
		a[minInd] = temp;		
	}
	for(int i = 0; i<n; i++){
		printf("%2d ",a[i]);
	}
	getch();
	
}
