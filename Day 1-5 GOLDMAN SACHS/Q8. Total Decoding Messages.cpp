#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int CountWays(string s){
		    if(s[0] == '0') return 0;
			int len = s.size();
			long long int mod = 1e9 + 7;
			vector<long long int>dp(len+1, 0);
			dp[0] = dp[1] = 1;
			for(int i = 1; i < len; i++){
				if(s[i] == '0' and s[i-1] > '2')
					return 0;
			}
			for(int i = 2; i <= len; i++){
				if(s[i-1] > '0')
					dp[i] = dp[i-1];
				if(s[i-2] == '1' or (s[i-2] == '2' and s[i-1] < '7'))
					dp[i] +=dp[i-2];
				dp[i] %= mod;
			}
			return dp[len];
		}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
