#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> arr, int k) {
        int n=arr.size();
        if (n%2 != 0) return false;
 
        unordered_map<int, int> mpp;
        
        for(int i = 0; i < n; i++){
            int idx=((arr[i] % k) + k) % k;
            mpp[idx]++;
        }
            
        for(int i = 0; i < n; i++) {
            int rem = ((arr[i] % k) + k) % k;
            if(2 * rem == k) {
                if(mpp[rem] % 2 != 0)
                    return false;
            }
            else if(rem == 0) {
                if(mpp[rem]%2!=0)
                    return false;
            }
            else if(mpp[rem] != mpp[k - rem])
                return false;
        }
        return true;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
