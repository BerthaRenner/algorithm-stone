#include<bits/stdc++.h>
using namespace std;

map<string,bool>k;
int n;
string a;

int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		k[a]?cout<<"YES\n":cout<<"NO\n";
		k[a]=1;//��Ϊmap�ĳ�ʼֵΪ�գ����Կ���ֱ���ж�
	}
	
	
	return 0;
}
