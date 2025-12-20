class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
      
       unordered_set<int>seen;
       int indx=n;

       //as we have to remove element from front
       //s traverse from the back;
       for(int i=n-1;i>=0;i--){
          if(seen.count(nums[i])){
           indx=i+1;
           break;
          }
          seen.insert(nums[i]);


         
       }
        if(indx==n)return 0;
//so max 2 is added
       return (indx+2)/3;
    }
};
//1+2
//2+1
//3+0
//4+2
//5+1
//6+0
//so max 2 is added