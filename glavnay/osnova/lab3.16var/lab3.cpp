#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double P=3.14;
    double a=P/5;
    double b=P;
    int k=10;
    double h=(b-a)/k;
    double e=0.0001;

    for (int i=0; i<=k; i++)
{
    double x=a+i*h;

    double y=P*P/8-P/4*abs(x);

    int n=40;
    double sumn=0;
    for (int j=1;j<=n;j++)
{
    double t=2*j-1;
    sumn+=cos(t*x)/t*t;
}
    double se=0;
    double term=0;
    int m=0;
    do
{
    m++;
    double t=2*m-1;
    term= cos(t*x)/(t*t);
    se+=term;
}while(abs(term)>=e);
    cout<<" X= "<<x<<" Sumn= "<<sumn<<" SE= "<<se<<" M= "<<m<<" Y= "<<y<<endl;
}
    return 0;
}