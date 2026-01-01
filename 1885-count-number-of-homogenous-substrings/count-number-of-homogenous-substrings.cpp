class Solution {
public:
const int M=1e9+7;

    int countHomogenous(string s) {
     int n=s.length();
     int cnt=0;
     char curr='%';
      int j=2;
     for(int i=0;i<n;i++){
     if(curr=='%'){
        curr=s[i];
        cnt=(cnt+1)%M;
        j=2;
     }
     else if(s[i]==curr){
        
        cnt=(cnt+j)%M;
        j++;
     }
     else{
        curr=s[i];
        cnt=(cnt+1)%M;
        j=2;
     }
     }   

     return cnt;
    }
};