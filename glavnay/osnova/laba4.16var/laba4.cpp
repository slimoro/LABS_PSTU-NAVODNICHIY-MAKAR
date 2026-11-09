#include <iostream>
#include <stdlib.h>
#include <ctime>  
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[10];
    int n=5;

    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
    cout<<"Очередь: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Добавляем 3 элемента"<<endl;
    for(int k=0;k<3;k++)
    {
        arr[n]=rand()%100;
        n++;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    cout<<"Удаляем 4 элемента"<<endl;
    for(int k=0;k<4;k++)
    {
        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}