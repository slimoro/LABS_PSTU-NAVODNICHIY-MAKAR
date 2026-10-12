#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum=0.0;
    double toch=0.0001;
    double factorial=1.0;

    int n=2;
    double an=1.0;

    while(abs(an)>=toch)
    {
        factorial*=n;
        an=log10(factorial)*exp(-n*sqrt(n));

        if (an<toch)
        {
            break;
        }
        sum+=an;
        n++;
    }
    cout<<"Результат "<<sum<<endl;
    return 0;
}
// ответ 0.0225649