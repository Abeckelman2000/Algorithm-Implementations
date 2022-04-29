// Search Insert Position: 
// Given a sorted array of distinct integers and a target value, 
// return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// -----------------------------------------------------------------------------------------------------------------
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low = 0;
       int high = nums.size()-1;
       int mid = 0;
       
       while(low <= high){
    	   mid = (low + high)/2;
    	   if(nums[mid] == target){
    		   return mid;
    	   }
    	   else if(target < nums[mid]){
    		   high = mid-1;
    	   }
    	   else if(target > nums[mid]){
    		   low = mid+1;
    	   }
       }
       return low;
    }
};
