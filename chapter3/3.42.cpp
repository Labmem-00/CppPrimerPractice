#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> nV,int *n)
{
    int nSize=sizeof(n)/4;
    if(int(nV.size())>(nSize))
    {
        cout<<"array is small";
    }
    else
    {
        int count=0;
        while(count<int(nV.size()))
        {
            n[count]=nV[count];
            ++count;
        }
    }
}
int main()
{
    int n[5];
    vector<int>nV{2,6,5,4,5,6};
    change(nV,n);
    cout<<n[2];
    return 0;
}