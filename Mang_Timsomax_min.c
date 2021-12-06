#include <stdio.h>
#include <stdlib.h>
int main(){
int n=0,i;
int A[10000]={};
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&A[i]);
	}	
int max=A[0];
for (i=1;i<n;i++){
if (max<A[i])
max = A[i];
//return max;	
}
int min=A[0];
for (i=1;i<n;i++){
if (min>A[i])
min = A[i];
//return max;	
}
printf ("%d\t%d",max,min);
}

