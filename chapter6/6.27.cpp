#include<iostream>
using namespace std;
int sum(initializer_list<int> it)
{
    int sum=0;
    for(const auto &i:it)
        sum+=i;
    return sum;
}
int main()
{
    int sumi=sum({4,5,7,8,5,4,2,6,5});
    cout<<sumi;
}
//不需要声明为引用类型，函数中并没有写操作，且initializer_list作为一种模板类型，并不会出现像数组一样的自动转换成指针的问题
