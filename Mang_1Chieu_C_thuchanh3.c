#include <stdio.h>
#include <stdlib.h> 
int B[1000005] = {};
int main()
{
	int i , j , n = 0 ;
    int A[100005] ;
    scanf ("%d", &n );
    for ( i = 0; i < n; i++)
    {
    	scanf("%d", &A[i]);
    	B[A[i]]++;
    }
    int max = 1 , sln = A[0] ;
    for ( i = 0; i < n; i++)
    {
    	if ( max < B[A[i]] )
    	{
    		max = B[A[i]];
    	    sln = A[i];
    	}
		else if ( B[A[i]] == max && A[i] > sln )
		{
		    max = B[A[i]];
			sln = A[i];
		}	
    }
    	printf ("%d %d", sln , max );  
}
    


