#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string x;
    while(cin>>x)
    {
        if(x.size()<=9)
            cout<<x<<"\n";
        else
            cout<<x[-1]<<x.size()-2<<x[x.size()-1]<<"\n";
    }
}