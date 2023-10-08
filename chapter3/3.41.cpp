#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n[5]={1,2,3,4,5};
    vector<int> nV(begin(n),end(n));
    cout<<*nV.begin();
    return 0;
}