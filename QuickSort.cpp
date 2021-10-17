#include <stdio.h>

int partition(int A[], int low, int high)
{
    int key = A[low];
    int i = low;
    int j = high;
    int temp;

     while (i < j){
        while (A[i] <= key){
            i++;
        }
        while (A[j] > key){
            j--;
        }
        if (i < j){
        	temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high){
    int j; 

    if (low < high){
        j = partition(A, low, high); 
        quickSort(A, low, j - 1);  
        quickSort(A, j + 1, high); 
    }
}

int main(){
    int n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    
    int Arr[n];
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++){
    	scanf("%d",&Arr[i]);
	}
	
	printf("\n---below is sorted array---\n");
    quickSort(Arr, 0, n - 1);
    for(int i=0;i<n;i++){
    	printf("%d ",Arr[i]);
	}
    return 0;
}

