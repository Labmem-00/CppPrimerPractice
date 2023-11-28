#include<iostream>
#include<vector>
using namespace std;
int testadd(int x=0,int y=5)
{
    return x+y;
}

int (*pt) (int x,int y);
int main()
{
    pt=testadd;
    vector<int(*)(int x,int y)> p;
    p.push_back(pt);
    int m=p[0](2,3);
    cout<<m;
}