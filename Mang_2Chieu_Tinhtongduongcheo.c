#include <stdio.h>
#include <stdlib.h>	
//Mang 2 chieu  
int main(){
int a[50][50]={};
int n=0,m=0,i,j,tong=0;
scanf("%d",&n);
for (i=0;i<n;i++)
{ 
	for (j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]); 
		if(i==j)
		{
			tong+= a[i][j];
		}
	}
}
printf("%d",tong);
}








