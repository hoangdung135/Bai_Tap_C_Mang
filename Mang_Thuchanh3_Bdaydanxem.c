#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c ;
	int i , n , max = 0 ;
    int B[350] = {} ;
    scanf ("%d", &n );
    for ( i = 0; i < n; i++)
    {
    	scanf ("%c", &c);
    	B[(int)c]++;
    }
    for(i = 0; i < n ; i++)
    {  
    	if ( max < B[(int)c] )
    	    {
   	            max = B[(int)c];
   	        }
   	}
   	if ( max <= ( n + 1 ) / 2 )
   		printf ("So beautiful");
   	else
   	    printf ("So ugly");
}  	



