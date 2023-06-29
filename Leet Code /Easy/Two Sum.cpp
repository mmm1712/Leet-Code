
/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nmap ;
for (int j = 0; j < nums.size() ; ++j) {
int value = target - nums[j];
if (nmap.count(value)) {
return {nmap[value], j};
}
nmap[nums[j]] = j;
}
return {};
    }
};
