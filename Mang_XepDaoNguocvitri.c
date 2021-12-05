#include <stdio.h>
#include <stdlib.h>	
int main(){
int N=0,i=0;
int A[1000]={};int B[1000]={};
scanf("%d",&N);
for (i=0;i<N;i++){
scanf("%d",&A[i]);
}
for (i=0;i<N;i++){
	B[i]=A[N-1-i];
	printf("%d ",B[i]);
	}
}







