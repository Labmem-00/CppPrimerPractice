#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> iv(3,5);
    iv.push_back(4);
    auto k=iv.begin();
    while (k!=iv.end())
    {
        *k=(*k%2==0)?*k:(*k)*(*k);
        ++k;
    }
    for(auto i:iv)
        cout<<i<<" ";
    return 0;
} 