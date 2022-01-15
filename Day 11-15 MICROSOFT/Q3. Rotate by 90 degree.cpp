#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
 
void rotate(vector<vector<int>>& a)
{
    int n=a.size();
    for (int i = 0; i < n/2; ++i)
    {
        for(int j=i; j<n-i-1; j++)
        {
            // swap in anti-clockwise direction
            int temp = a[i][j];
            a[i][j] = a[j][n-1-i];        // right to top
            a[j][n-1-i] = a[n-1-i][n-1-j];// bottom to right
            a[n-1-i][n-1-j] = a[n-1-j][i];// left to bottom
            a[n-1-j][i] = temp;                // top to left
        }
    }
}


int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
