#include<iostream>
#include<cctype>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> sV;
	string s;
	while(cin>>s)
	{
		sV.push_back(s);
		for(auto i:s)
			cout<<i<<endl;
		cout<<s;
	}
	return 0;
}

