#include <stdio.h>
#include <stdlib.h>	
//Mang 2 chieu  
int main(){
int a[50][50]={};
int n=0,m=0,i,j,cnt=0;
scanf("%d%d",&n,&m);
for (i=0;i<n;i++)
{ 
	for (j=0;j<m;j++)
	{
		scanf("%d",&a[i][j]); 
	}
}
for (i=0;i<m;i++)
{ 
	for (j=0;j<n;j++)
	{
		printf("%d ",a[j][i]); 
	}
	printf("\n");
}
}








