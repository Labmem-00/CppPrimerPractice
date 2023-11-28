#include<iostream>
using namespace std;
inline bool ifShorter (const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}
int main()
{
    string s1="lkskfd";
    string s2="dsd";
    bool r=ifShorter(s1,s2);
    cout<<r;
}