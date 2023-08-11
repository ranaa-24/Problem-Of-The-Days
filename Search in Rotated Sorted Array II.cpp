class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1, mid;

        while(lo <= hi){
            mid = lo+(hi-lo)/2;
            if(target == nums[mid]) return true;

            // spacial edge case, 3, 3 , ,3, 3, 3           lo == mid == hi 
            if(nums[lo] == nums[mid] && nums[mid] == nums[hi]){
                lo++;
                hi--;
                continue;
            }

            //same logic as part-I
            if(nums[lo] <= nums[mid]){      // left is sorted
                if(target >= nums[lo] && target <= nums[mid])
                    hi = mid-1;
                else
                    lo = mid+1;
            }
            else{                           // right is sorted  
                if(target >= nums[mid] && target <= nums[hi])
                    lo = mid+1;
                else 
                    hi = mid-1;
            }
        }
        return false;
    }
};