#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

class Solution{
public:	
	
	ull getNthUglyNo(int n) {
	    ull ugly[n]; 
	    ull i2 = 0, i3 = 0, i5 = 0;
	    ull nt_mul_of_2 = 2;
	    ull nt_mul_of_3 = 3;
	    ull nt_mul_of_5 = 5;
	    ull next_ugly_no = 1;

	    ugly[0] = 1;
	    for (int i = 1; i < n; i++) {
	        next_ugly_no = min(nt_mul_of_2, min(nt_mul_of_3, nt_mul_of_5));
	        ugly[i] = next_ugly_no;
	        if (next_ugly_no == nt_mul_of_2) {
	            i2 = i2 + 1;
	            nt_mul_of_2 = ugly[i2] * 2;
	        }
	        if (next_ugly_no == nt_mul_of_3) {
	            i3 = i3 + 1;
	            nt_mul_of_3 = ugly[i3] * 3;
	        }
	        if (next_ugly_no == nt_mul_of_5) {
	            i5 = i5 + 1;
	            nt_mul_of_5 = ugly[i5] * 5;
	        }
	    } 
	    return next_ugly_no;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  
