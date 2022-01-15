#include<bits/stdc++.h>
using namespace std;

//Function to generate binary numbers from 1 to N using a queue.

string binary(int n){
    string res="";
    while(n>0){
        int rem=n%2;
        n/=2;
        res+=to_string(rem);
    }
    reverse(res.begin(),res.end());
    return res;
}

vector<string> generate(int N)
{
     vector<string> ans;
     for(int i=1;i<=N;i++){
         if(i==1) ans.push_back("1");
         else if(i==2) ans.push_back("10");
         else{
             string s=binary(i);
             ans.push_back(s);
         }
     }
     return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
} 
