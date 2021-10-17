#include<stdio.h>
#include<conio.h>
int main (){
int i,j;
int ar[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
int (*ptr)[5];

ptr=ar;
for(i=0;i<3;i++)
{
for(j=0;j<5;j++)
{
printf("%d    %u\n",*(*(ptr+i)+j),*(ptr+i)+j);
}
printf("\n");
}
getch();
return 0;
}
	


