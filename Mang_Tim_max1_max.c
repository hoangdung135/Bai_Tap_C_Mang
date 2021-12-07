#include <stdio.h>
#include <math.h>
int main()
{
int T;
scanf ("%d",&T);
while ( T-- )
{
	int n = 0 , i , max = -10000000, max1 = -10000000, check = 0;
    int  A[100005] ;
    scanf ("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
	    scanf ("%d",&A[i]);
	}
	for (i = 0 ; i < n ; i++)
    {    
		if ( A[i] > max )
	    {
		    max = A[i];
	    }
    }	
    for ( i = 0 ; i < n ; i++ )
    {
        if ( max1 < A[i] && A[i] != max )
	    {
        max1 = A[i];
		check = 1;	
        }
    }
if ( check == 0 )
    {
    printf ("0\n");
    }
else
    {
    printf ("%d %d\n", max1 , max);
    }
}
}

