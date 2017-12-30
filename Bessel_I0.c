/*

Date : 24 May 2017

Program to calculate Modified Bessel funtion of 1st kind


Programmer : Rachana S Yajur    rac.3570@gmail.com

I_0 [R] = J_0 [i*R] = Sum[ (R/2)^2m / (m!)^2][m->0 to infinity]

*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/* function prototype*/
long double
bessel_I0(double R);

long double
bessel_I1(double R);

long double
bessel_K0(double R);

long double
bessel_K1(double R);

/*********************/


long double
bessel_I0(double R)
{


FILE *ffac;
long double I_0;
long double factorial[120];
int m[120],n;
char line[256];


n=0;

ffac = fopen("factorials.dat","r");

	while(fgets(line,sizeof(line),ffac)!=NULL)
	{
		sscanf(line,"%d %Le",&m[n],&factorial[n]);

		n++;
	}
I_0 = 0.;

for(n = 0; n<100 ; n++)
{
I_0 = I_0 + pow(R/2.,2*n)/(factorial[n]*factorial[n]) ;
}

return(I_0);

}

/*******************************************************************************/

long double
bessel_I1(double R)
{


FILE *ffac;
long double I_1;
long double factorial[120];
int m[120],n;
char line[256];


n=0;

ffac = fopen("factorials.dat","r");

	while(fgets(line,sizeof(line),ffac)!=NULL)
	{
		sscanf(line,"%d %Le",&m[n],&factorial[n]);

		n++;
	}
I_1 = 0.;

for(n = 0; n<100 ; n++)
{
I_1 = I_1 + pow(R/2.,2*n + 1)/(factorial[n]*factorial[n]*(n+1.)) ;
}

return(I_1);

}

/***************************************************************************/

long double
bessel_K0(double R)
{


FILE *ffac;
long double K_0;
long double factorial[120];
int m[120],n;
char line[256];


n=0;

ffac = fopen("factorials.dat","r");

	while(fgets(line,sizeof(line),ffac)!=NULL)
	{
		sscanf(line,"%d %Le",&m[n],&factorial[n]);

		n++;
	}


for(n = 0; n<100 ; n++)
{

K_0 = K_0 + pow(R/2.,2*n + 1)/(factorial[n]*factorial[n]*(n+1.)) ;
}

return(K_0);

}

/**************************************************************************/

long double
bessel_K1(double R)
{


FILE *ffac;
long double K_1;
long double factorial[120];
int m[120],n;
char line[256];


n=0;

ffac = fopen("factorials.dat","r");

	while(fgets(line,sizeof(line),ffac)!=NULL)
	{
		sscanf(line,"%d %Le",&m[n],&factorial[n]);

		n++;
	}
K_1 = 0.;

for(n = 0; n<100 ; n++)
{
K_1 = K_1 + pow(R/2.,2*n + 1)/(factorial[n]*factorial[n]*(n+1.)) ;
}

return(K_1);

}

/**************************************************************************/

