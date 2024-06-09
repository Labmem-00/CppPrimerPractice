#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    long u11=3,u12=7;
    int i=long((~'q')<<6);
    cout<<bitset<8>(i)<<endl;//输出8位二进制数。
    cout<<(u11&u12);//3
    cout<<(u11|u12);//7
    //&&，||输出都为1
    cout<<sizeof(int);
    return 0;
} 