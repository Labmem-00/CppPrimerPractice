#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int ival=0,*ptr=&ival;
    vector<int> vec(2,2);
    cout<<vec[1];
    cout<<(ptr!=0&&*ptr++)<<endl;//无问题
    cout<<(ival++ && ival)<<endl;
    cout<<(vec[ival++] <= vec[ival]);
    return 0;

} 