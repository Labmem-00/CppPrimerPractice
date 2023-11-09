#include<iostream>
using namespace std;
int swap(const int n,const int *np)
{
    if(n<*np)
        return *np;
    else
        return n;
}
int main()
{
    int n=3,m=6;
    int *np=&m;
    n=swap(7,np);
    cout<<n;
    return 0;
}