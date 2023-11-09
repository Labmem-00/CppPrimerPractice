#include<iostream>
using namespace std;
using res=string (&)[10];
auto reString(res t)->string (&)[10]
{
    return t;
}
// res reString(res t)`
// {
//     return t;
// }
// string (&reString(string (&t)[10]))[10]
// {
//     return t;
// }
int main()
{
    string t[10]={"k","k","j","sj"};
    string (&mp)[10]=reString(t);
    for(int i=0;i<10;++i)
    {
        cout<<mp[i];
    }
}