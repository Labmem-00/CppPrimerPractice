#include<iostream>
using namespace std;
int main()
{
    string s,sLast;
    unsigned nMax=1,tmax=0;
    while(cin>>s)
    {
        if(s==sLast)
        { 
            ++nMax;
            if(nMax>tmax)
            tmax=nMax;
        }
        else
        {
            nMax=1;
            sLast=s; 
        }
    
    }
    if(tmax==0)
        cout<<"NULL";
    else
        cout<<tmax;
}