#include<iostream>
using namespace std;
using int_arr=int[4];
int main()
{
    //1.不使用auto类型推导的范围for
    int ia[3][4]={1,2,3,4};
    for(int_arr &p:ia)
        for(int &q:p)
            cout<<q;
    cout<<endl;
    //2.下标
    for(int i=0;i<3;i++)
        for(int j=0;j<4;++j)
            cout<<ia[i][j];
    cout<<endl;
    //3，指针
    for(int_arr*p=ia;p!=ia+3;++p)
        for(int *q=*p;q<*p+4;++q)
            cout<<*q;
}