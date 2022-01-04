#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    string printMinNumberForPattern(string s){
        string ans="";
        int value=1;
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='D')
                st.push(value++);
            else{
               st.push(value++);
                while(!st.empty()){
                    char temp=st.top()+'0';
                    ans.push_back(temp);
                    st.pop();
                 }
            }
        }
        st.push(value++);
        while(!st.empty()){
            char temp=st.top()+'0';
            ans.push_back(temp);
            st.pop();
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
