#include<stdio.h>
#include<math.h>

float m_th_order(double slitdistance, double angletheta, double wavelength){

    return ((slitdistance*1e-6) * sin(angletheta)) / (wavelength*1e-9);
    }

int main(){

    double wavelength, slitdistance, theta, angletheta;

    printf("Enter Wavelength (nm) : ");
    scanf("%lf", &wavelength);

    if(350> wavelength || wavelength >750){
        printf("Out of range.Please enter a valid number :");
        return 1;
    }

    printf("Enter slit-distance (um) : ");
    scanf("%lf", &slitdistance);

    printf("Enter angle (degree) : ");
    scanf("%lf", &theta);

    angletheta= theta *( M_PI / 180.0);

    float order = m_th_order(slitdistance, angletheta, wavelength);

    printf("m-th order : %.1f", floor(order));

return 0;
}
