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
		int n;
		cin>>n;
		string s;
			cin>>s;
		n=s.length();
	
		int ans = 0;
		  for (int i = 0; i < n; i++) {
            if (i <= n - 3 && s.substr(i, 3) == "...") {
               ans =2;
                break;
            } else if (s[i] == '.') {
                ans++;
            }
        }
		cout<<ans<<'\n';
	}
	return 0;
}