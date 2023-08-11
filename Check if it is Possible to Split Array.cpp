//LEETCODE 2811
// You are given an array nums of length n and an integer m. You need to determine if it is possible to split the array into n non-empty arrays by performing a series of steps.

// In each step, you can select an existing array (which may be the result of previous steps) with a length of at least two and split it into two subarrays, if, for each resulting subarray, at least one of the following holds:

// The length of the subarray is one, or
// The sum of elements of the subarray is greater than or equal to m.
// Return true if you can split the given array into n arrays, otherwise return false.


// // OBSERVATION AND APPROACH 
// This case is only possible if there are two consecutive number whose sum is greater than or equal to m. 
// Because if we have this case then we can simply remove all previous and post numbers one by one.
//  But if this is not present then there is no way we can devide all the elements as at some point 
//  we arrive at point where we have three numbers left and non of the two consicutive sum greater than or equal to m.

class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        if(nums.size() <= 2) return true;           // if length is less than 2 than the arr can be splited in two of len 1

        for(int i=1; i < nums.size(); i++)
            if(nums[i] + nums[i-1] >= m)  
                return true;
            
        return false;
    }
};