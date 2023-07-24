class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
       int i,j=0;
       int n= nums.size();
       for (i=0;i<n;i++){
           for(j=i+1;j<n;j++){                 //time complexcity = n^2
                                   //n^2 bcz two for loop one underother 
           if(nums[i]+nums[j]==target){
               return {i,j};
           }
        
        }

       }
      return {};
    }
    
};