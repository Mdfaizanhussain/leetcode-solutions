class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int bestsum=0;
        int bestdiff=INT_MAX;
       
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){

                    int sum=nums[i]+nums[j]+nums[k];
                    int diff=abs(sum-target);
                    if(diff<bestdiff){
                        bestdiff=diff;
                        bestsum=sum;
                    }
                }
            }
        }
        return bestsum;
    }
};
//if index not asked then sort it
//apply 2 pointer
