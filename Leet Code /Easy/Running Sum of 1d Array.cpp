
/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Declare a vector to store the running sum values
        vector<int> runningSum;
        // Initialize a variable to keep track of the current running sum
        int sum = 0; 
        // Iterate through each element in the input vector
        for (int num : nums ){ 
            sum = sum + num; 
           runningSum.push_back(sum);
        }      
        return runningSum;
    }
};
