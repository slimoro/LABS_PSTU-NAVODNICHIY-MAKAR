#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout<<"Введите строку: ";
    cin>>s;

    int n=s.size();
    bool flag=true;

    for(int i=0;i<n;i+=2)
    {
        if(s[i]!=s[i+1])
        {
            flag=false;
        }
    }
    cout<<flag<<endl;
}