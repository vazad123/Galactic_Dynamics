
/*

Date : 24 May 2017

Program to calculate Modified Bessel funtion of 1st kind


Programmer : Rachana S Yajur    rac.3570@gmail.com

Main program 

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

int
main(void)
{
FILE *fBessels;

double R;
int i;

fBessels = fopen("Bessels.dat","w");

fprintf(fBessels,"#R \t Bessel_I0 \t Bessel_I1 \t Bessel_K0 \t Bessel_K1 \n");

R = 0.;

for(i=0;i<100;i++)
{

fprintf(fBessels,"%f \t %Lf \t %Lf \t %Lf \t %Lf  \n",R,bessel_I0(R),bessel_I1(R),bessel_K0(R),bessel_K1(R));



R = R + 0.1;

}

return(0);

}







