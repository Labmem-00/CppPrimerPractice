#include<iostream>
using namespace std;
int main()
{
    int i=0,j=2,k=2;
    cout<<((i!=j)<k);
    //i!=j<k输出0，先比较j<k返回0或1，再比较i!=,与i!=(j<k)等价
}