#include <stdio.h>
#include <stdlib.h>
//Tìm tat ca cac vi trí cua sô lon nhât trong Mang 1 Chieu
//Vi Tri = index + 1
int main(){
int T=0,i,n=0;
int A[10000]={};
scanf ("%d",&n);
for(i = 0; i <n; i++){     
   scanf ("%d",&A[i]);
    }
int max = A[0],index = 0;
for (i=1;i<n;i++){
	if(A[i]>max){
		max = A[i];
		index = i;
		}
}
printf("%d",index+1);
}
