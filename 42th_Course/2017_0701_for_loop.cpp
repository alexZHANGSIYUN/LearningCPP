#include"cstdio"
#include"cstdlib"
#include"iostream"
#include"algorithm"
#include"vector"
using namespace std;
int main()
{   freopen("71.in","r",stdin);
    freopen("71.out","w",stdout);
    vector<int> v;
    int i;
    for(i=0;i<=9;i++)
	 v.push_back(9-i);
	for(i=0;i<=9;i++)
	 cout<<v[i]<<" ";
	sort(v.begin(),v.end());
	cout<<endl;
	for(i=0;i<=9;i++)
	 cout<<v[i]<<" ";
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	system("pause");
	return 0; 
}
