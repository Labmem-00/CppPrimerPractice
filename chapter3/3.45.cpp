#include<iostream>
using namespace std;
//使用auto关键字
int main()
{
    //1.范围for
    int ia[3][4]={1,2,3,4};
    for(auto &p:ia)
        for(auto q:p)
            cout<<q;
    cout<<endl;
    //2.下标
    for(int i=0;i<3;i++)
        for(int j=0;j<4;++j)
            cout<<ia[i][j];
    cout<<endl;
    //3，指针
    for(auto p=ia;p!=ia+3;++p)
        for(auto q=*p;q<*p+4;++q)
            cout<<*q;
}