/*

Date : 25 - May -  2017

Program to find the Bessel funcions using GSL package

Programmer : Rachana S Yajur    rac.3570@gmail.com

  
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<gsl/gsl_sf_bessel.h>


int
main(void)
{
FILE *fgsl_sf;
int i;
double R;

fgsl_sf = fopen("besselfunctions_gsl.dat","w");

fprintf(fgsl_sf,"#R \t Bessel_I0 \t Bessel_I1 \t Bessel_K0 \t Bessel_K1 \n");

for(i=0;i<100;i++)
{

//fprintf(fgsl_sf,"%f \t %f \t %f \t %f \t %f  \n",R,gsl_sf_bessel_I0(R),gsl_sf_bessel_I1(R),gsl_sf_bessel_K0(R),gsl_sf_bessel_K1(R));

fprintf(fgsl_sf,"%f \t %f\t %f \n",R,gsl_sf_bessel_I0(R),gsl_sf_bessel_K0(R));



R = R + 0.1;

}

printf("%f\n",gsl_sf_bessel_I1(0.1));

return(0);

}

