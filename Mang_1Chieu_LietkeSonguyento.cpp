#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Liet Ke so Nguyen To trong Mang 1Chieu
void Nhapmang ( int a[] , int n )
{
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &a[i]);
	}
}
bool kiemtrasnt ( int n)
{
	if ( n < 2)
		return 0;
	for ( int i = 2 ; i <= sqrt(n); i++ )
	{
		if ( n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void xuatsnt ( int a[] , int n)
{
	for ( int i = 0 ; i < n ; i++)
	{
		if ( kiemtrasnt ( a[i]) )
		{
			printf ("%d ", a[i]);
		}
	}
}
int main ()
{
	int a[100005];
	int n;
	scanf ("%d",&n);
	Nhapmang ( a , n );
	xuatsnt ( a , n);
}






