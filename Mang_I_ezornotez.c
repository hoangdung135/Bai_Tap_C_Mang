#include <stdio.h>
#include <stdlib.h>	
int main(){
int N=0,i=0,k=0,dem=0;
int A[105]={};
scanf("%d%d",&N,&k);
for (i=0;i<N;i++){
scanf("%d",&A[i]);
}
for (i=0;i<N;i++){
	if(k>0&&A[i]%k==0){ 
	dem++;}
	else if (k==0){
	dem = 0;
	}
	}
	printf("%d",dem);
}







