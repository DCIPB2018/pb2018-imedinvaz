#include <stdio.h>
#include<math.h>


int main() 
{

	int a,h=0,j,i,k;
	printf("inserta el valor del cual quieres calcular su factorial");
	scanf("%i",&a);
	j=a/2;
	for(i=0;i<j;i++)
	{
		h=a*(a-1);
		a=a-2;
	 k=k*h;
	}
	printf("factorial= %i",k);


	return 0;
}