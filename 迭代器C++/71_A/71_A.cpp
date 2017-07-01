#include"cstdio"
#include"cstdlib"
#include"vector"
#include"iostream"
#include"algorithm"
using namespace std;
int main()
{   freopen("71_A.in","r",stdin);
    freopen("71_A.out","w",stdout);
    vector<int> v;
    int i,n;
    cin>>n;
    for(i=0;i<=n;i++)
     v.push_back(n-i);
    for(i=0;i<=n;i++)
     cout<<v[i]<<" "<<endl;
    sort(v.begin(),v.end());
    cout<<endl;
    for(i=0;i<=n;i++)
     cout<<v[i]<<" "<<endl;
    fclose(stdin);
    fclose(stdout);
    system("pause");
    return 0;
}
