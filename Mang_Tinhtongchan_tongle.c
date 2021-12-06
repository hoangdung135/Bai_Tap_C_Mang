#include <stdio.h>
#include <stdlib.h>
int main(){
int n=0,i;
int A[10000]={};
long long tongle=0,tongchan=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&A[i]);
	}
for (i=0;i<n;i++){
	if (A[i]%2!=0){
		tongle += A[i];}
	else {
		tongchan +=A[i];}
}
printf ("%lld\t%lld",tongle,tongchan);
}

