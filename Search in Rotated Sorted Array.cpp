class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1, mid;

        while(lo <= hi){
            mid = lo+(hi-lo)/2;

            if(nums[mid] == target)
                return mid;

            if(nums[lo] <= nums[mid]){      //if left half is sorted
                if(target >= nums[lo] && target <= nums[mid]){      //if present in range
                    hi = mid-1;             //move to the left half
                }
                else{
                    lo = mid+1;         //if not present in left half, move to right half
                }
            }
            else{   //if left half wasnt sorted then ofc right part is sorted 
                if(target >= nums[mid] && target <= nums[hi]){   //if present in right half range
                    lo = mid+1;     // move to right half
                }                   
                else{
                    hi = mid-1;     // not present, move to left half
                }
            }
        }
        return -1;
    }
};

// Approach
// The function search takes in a vector nums representing the rotated sorted array and an integer target that we need to find.
// It initializes the variables left and right to the start and end indices of the array, respectively.
// The variable mid is calculated as the middle index of the array using the formula (left + right) / 2.
// The while loop is executed as long as the left pointer is less than or equal to the right pointer. This ensures that the search space is not empty.
// Inside the while loop, we check if the middle element nums[mid] is equal to the target. If it is, we return the index mid.
// If the middle element is greater than or equal to the left element, it means the left part of the array is non-rotated.
// We then check if the target is within the range of the left non-rotated part. If it is, we update the right pointer to mid - 1 to search in the left part.
// If the target is not within the range, we update the left pointer to mid + 1 to search in the right part.
// If the middle element is less than the left element, it means the right part of the array is rotated.
// We then check if the target is within the range of the right rotated part. If it is, we update the left pointer to mid + 1 to search in the right part.
// If the target is not within the range, we update the right pointer to mid - 1 to search in the left part.