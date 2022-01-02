
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{    
      string dest = "";
      for(int i = 0; i < src.size(); i++){
        dest += src[i];
        int cnt = 1;
        while(i+1 < src.size() and src[i] == src[i+1]){
            cnt++;
            i++;
        }
        dest+=to_string(cnt);
      }
     return dest;
}    
