#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> a, int m, int n) 
    {
        vector<int> ans;
        int i, k = 0, l = 0;

        while (k < m && l < n) {
            for (i = l; i < n; ++i) {
                ans.push_back(a[k][i]);
            }
            k++;
            
            for (i = k; i < m; ++i) {
                ans.push_back(a[i][n-1]);
            }
            n--;
            
            if (k < m) {
                for (i = n - 1; i >= l; --i) {
                    ans.push_back(a[m-1][i]);
                }
                m--;
            }
    
            if (l < n) {
                for (i = m - 1; i >= k; --i) {
                    ans.push_back(a[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
} 
