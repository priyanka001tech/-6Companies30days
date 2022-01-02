
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        int start = 0;
        int end = 1;
        long long product = arr[0];
        int count = 0;
        while (start <= end && end <= n) {
            if (product < k) {
                count += end - start;
                if (end < n) product *= arr[end];
                end++;
            } else {
                product /= arr[start++];
            }
        }
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
 
