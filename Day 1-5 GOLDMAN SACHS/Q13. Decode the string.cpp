#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string decodedString(string s){
        string ans="";
        stack<string> st;
        stack<int> n;
        int num=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]>='a' && s[i]<='z'){
                ans+=s[i];
            }
            else if(s[i]=='['){
                st.push(ans);
                n.push(num);
                num=0;
                ans="";
            }
            else if(s[i]==']'){
                string temp=ans;
                for(int i=0;i<n.top()-1;i++){
                    ans+=temp;
                }
                ans=st.top()+ans;
                st.pop();
                n.pop();
            }
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  
