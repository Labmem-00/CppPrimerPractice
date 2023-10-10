#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> sV(2,"k");
    vector<string>::iterator iter=sV.begin();
    cout<<*iter++;
    //(*iter)++错误
    cout<<iter->empty();
    // cout<<++*iter;错误
    cout<<(iter++->empty());
    return 0;
} 