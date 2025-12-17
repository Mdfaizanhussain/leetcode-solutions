class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
       vector<int>merged; 
       int i=0;
       int j=0;
       double output=0.0;
       while(i<n && j<m){
        if(nums1[i]<nums2[j]){
            merged.push_back(nums1[i]);
            i++;
        }
        else{
            merged.push_back(nums2[j]);
            j++;
        }
       }
      while(i<n){
        merged.push_back(nums1[i]);i++;
       }
       while(j<m){
        merged.push_back(nums2[j]);
        j++;
       }
     int size = merged.size();
        if (size % 2 != 0) {
            output = merged[size / 2];
        } else {
            output = (merged[size / 2] + merged[(size / 2) - 1]) / 2.0;
        }
       return output;
    }
};