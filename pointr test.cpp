#include<stdio.h>
int main (){
	int x [3][5] = {{1,2,3,4,5},
	                {6,7,8,9,10},
	                {11,12,13,14,15}};
	int *y = &x[0][0];
	
//for(int i =0; i<3;i++){
//	for(int j=0;j<5;j++){
//		printf("%2d ",x[i][j]);
//	}
//	printf("\n");
//}

printf("%d",*(y+2*5+3));



return 0;
}
