
#include<stdio.h>
#include<math.h>

double ratio_slitwidth_wavelength(int first_order_minima, double angletheta){
      return first_order_minima / sin(angletheta);
}

int main(){
   double theta;
   int minima;
   printf("Enter angle (45�) : ");
    scanf("%lf", &theta);

   printf("\n");
    double angletheta= theta*( M_PI / 180.0);

   printf("Enter first order minima : ");
    scanf("%d", &minima);

   printf("\n");

   double ratio = ratio_slitwidth_wavelength(minima, angletheta);

   printf("Ratio of slit-width and wavelength of first order minima at minimum 45�: %.2lf\n", ratio);

 return 0;
}
