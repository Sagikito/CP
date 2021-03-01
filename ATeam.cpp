#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int suma = 0;
    int total = 0;
    for(int i=1; i<=3*n; i++)
    {
        cin>>m;
        suma += m;
        if(i%3 == 0)
        {
            if(suma > 1)
                total++;
            suma = 0;
        }
    }
    cout<<total;
}