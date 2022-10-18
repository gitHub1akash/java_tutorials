#include<stdio.h>

int main(){
	
int l,i,temp[l],j=0,d=0;


printf("Enter the number of element in the array : ");
scanf("%d",&l);
int arr[l];
printf("\nEnter the elements : ");
for(i = 0; i < l; i++){
	scanf("%d",&arr[i]);
}
for(i=0;i<l;i++){
	if(arr[i] != arr[i+1]){
		temp[j] = arr[i];
		j++;
	}
	else{
		d++;
	}
}

for(i = 0; i < l-d; i++){
	printf("%d ",temp[i]);
}

return 0;
}

