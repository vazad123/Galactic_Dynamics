/*

Date : 24 - 05 - 2017

Program to find the factorial 

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Function Prototype*/

long double 
factorial(double m);

/********************/

int 
main(void)
{
FILE *ffac;
ffac = fopen("factorials.dat","w");


int j;

for(j = 0 ; j<100;j++)
{
fprintf(ffac,"%d \t %Le \n ",j, factorial(j));
}
return(0);

}


long double 
factorial(double m)

{

int i; 
long double fact;
fact = 1;

if(m != 0)
{
for(i = 1; i <= m; i++)
	{
		fact = fact * i ;

	}

return(fact);
}

else
{
return(1);
	
}
}
