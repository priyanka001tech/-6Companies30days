class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int i=1;
        int n=arr.size(),maxl=0;
        while(i<n){
            int peak=0,valley=0;
            while(i<n && arr[i-1]<arr[i]) peak++, i++;
            while(i<n && arr[i-1]>arr[i]) valley++, i++;
            if(peak>0 && valley>0) maxl=max(maxl,peak+valley+1);
            else if(!peak && !valley) i++;
        }
        return maxl;
        
    }
    
};
