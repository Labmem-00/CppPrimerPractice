#include<iostream>
using namespace std;
void swap(const int* np,const int *mp)
{
    auto tmp=np;
    np=mp;
    mp=tmp;
}
int main()
{
    int n=5,m=6;
    int *np=&n,*mp=&m;
    swap(np,mp);
    cout<<*mp;
}