#include <stdio.h>
#include <stdlib.h>
//Sap xep Chon - Xep day So Tang Dan 
int main()
{
	int i , j , n = 0 , min = 0 , temp;
    int A[100005] ;
    scanf ("%d", &n );
    for ( i = 0; i < n; i++)
    {
    	scanf ("%d", &A[i]);
    }
    for(i = 0; i < n - 1; i++)
    {  
        for ( j = i +1 ;j < n ;j++)
        {
    	    if ( A[j] < A[i] )
    	    {
   	            temp = A[j];
   	            A[j] = A[i];
   	            A[i] = temp;
   	        }
   	    }
   	}
   	for ( i = 0; i < n; i++)
    {
    	printf ("%d ", A[i]);
    } 	
}


