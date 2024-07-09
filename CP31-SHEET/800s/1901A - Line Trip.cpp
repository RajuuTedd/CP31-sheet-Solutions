#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int ans=0,prev=0;
		for(int i=0;i<n;i++)
		{
			int a=0;cin>>a;
			ans = max(ans,a-prev);
			prev =a;
	}
	ans = max(ans,2*(x-prev));
	cout << ans << '\n';
}
return 0;
}