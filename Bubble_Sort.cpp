#include<iostream>
using namespace std;
void printArray(int *a,int k)
{
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *a,int k)
{
    int temp;
    for(int j=0;j< k-1;j++)
    {
        for(int i=0;i< k-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
void bubbleSortAdaptive(int *a,int k)
{
    int temp;
    int isSorted=1;
    for(int j=0;j< k-1;j++)
   
    {
        cout<<"Program working on pass number "<<j+1<<endl;
        for(int i=0;i< k-1;i++)
        
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted)
        {
            //here we are returning a method
            return;
        }
    }
}
int main()
{
    printf("We are learning about Algorithms\n");
     int array[6] ={30,60,10,50,20,40};
    int k=6;
    printArray(array,k);
    bubbleSortAdaptive(array,k);
    printArray(array,k);
    return 0;
}
