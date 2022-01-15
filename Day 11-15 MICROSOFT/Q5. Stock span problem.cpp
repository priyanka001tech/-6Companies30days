#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> ans;
       stack<pair<int,int>> st;
       
       for(int i=0;i<n;i++){
           int s=1;
           while(!st.empty() && st.top().first <= price[i]){
               s+=st.top().second;
               st.pop();
           }
           st.push({price[i],s});
           ans.push_back(s);
       }
       return ans;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
