#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float P=0,a=0,b=0,N=0,x,I=0,sum=0,f=0,c,e,d,h,i;
	int j,k=0;
	char linea[255];
	FILE *entrada;
	FILE *salida;
	entrada= fopen("inte.txt","r");
	fgets(linea,255,(FILE*)entrada);
	fscanf(entrada,"%f%f%f%f%f",&P,&a,&b,&N,&k);
	f=(b-a)/N; //f es el valor en aumento que tiene que tomar para llegar al limite deseado
	e=a; // no modificar a
	for(c=0;c<N;c++)
	{
	e=e+f;
	d=pow(e,P);	
	h=(e-a)/k;
	j=k-1; //valor para que llegue  K-1 
	for(i=0;i<=j;i++)
	{
	sum=(a+(h*j))+sum;

	}
	I=h*((d+a)/2+sum);
	printf("%f  %f  %f",a,d,I);
	fclose(entrada);
	}
	
	
	



return 0;
}
