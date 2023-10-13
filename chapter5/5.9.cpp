#include<iostream>
using namespace std;
int main()
{
    unsigned ua=0,ue=0,ui=0,uo=0,uu=0,utap=0,uspace=0,
    uline=0,uff=0,ufl=0,ufi=0;
    char s;
    while(cin>>s)
    {
        if(s=='a'||s=='A')
            ++ua;
        else if(s=='e'||s=='E')
            ++ue;
        else if(s=='i'||s=='I')
            ++ui;
        else if(s=='o'||s=='O')
            ++uo;
        else if (s=='u'||s=='U')
            ++uu;
        else if(s=='\t')
            ++utap;
        else if(s==' ')
            ++uspace;
        else if(s=='\n')
            ++uline;
    }
    cout<<uff;
}