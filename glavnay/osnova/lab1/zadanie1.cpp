//результат когда работает с float(2.2207e+14)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a=1000;
     float b=0.0001;
    float c=pow(a-b,4)-pow(a,4)-4*pow(a,3)*b+6*pow(a,2)*pow(b,2);
    float d=pow(b,4)-4*a*pow(b,3);
    float res1=c/d;
    cout<<"РЕЗУЛЬТАТ1;"<<res1<<endl;
    


//результат когда работает с double(2.2207e+14)

   double a2=1000;
     double b2=0.0001;
    double c2=pow(a2-b2,4)-pow(a2,4)-4*pow(a2,3)*b2+6*pow(a2,2)*pow(b2,2);
    double d2=pow(b2,4)-4*a2*pow(b2,3);
    double res2=c2/d2;
    cout<<"РЕЗУЛЬТАТ2;"<<res2<<endl;
    return 0;
}