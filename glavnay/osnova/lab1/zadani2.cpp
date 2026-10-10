#include <iostream>
using namespace std;

int main()
{
    int n=6;
    int m=7;
    cout<<"Результат1 "<<++n*++m<<endl;//результат 56
    cout<<"Результат2 "<<(m++<n)<<endl;//результат 0
    cout<<"Результат3 "<<(n++>m);//результат 0
    return 0;
}