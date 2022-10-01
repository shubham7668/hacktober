class Solution {
public:
// Solution
// Take minimum size of two array. Possible number of partitions are from 0 to m in m size array.
// Try every cut in binary search way. 
// When you cut first array at i then you cut second array at (m + n + 1)/2 - i
// Now try to find the i where a[i-1] <= b[j] and b[j-1] <= a[i]. 
// So this i is partition around which lies the median.
    
// Time complexity is O(log(min(x,y))
// Space complexity is O(1)
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         //if nums1 length is greater than switch them so that input1 is smaller than nums2.
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int x = nums1.size();
        int y = nums2.size();

        int low = 0;
        int high = x;
        while (low <= high) {
            int partitionX = (low + high)/2;
            int partitionY = (x + y + 1)/2 - partitionX;

            //if partitionX is 0 it means nothing is there on left side. Use -INF for maxLeftX
            //if partitionX is length of nums1 then there is nothing on right side. Use +INF for minRightX
            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == x) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == y) ? INT_MAX : nums2[partitionY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                //We have partitioned array at correct place
                // Now get max of left elements and min of right elements to get the median in case of even length combined array size
                // or get max of left for odd length combined array size.
                if ((x + y) % 2 == 0) {
                    return ((double)max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2;
                } else {
                    return (double)max(maxLeftX, maxLeftY);
                }
            } else if (maxLeftX > minRightY) { //we are too far on right side for partitionX. Go on left side.
                high = partitionX - 1;
            } else { //we are too far on left side for partitionX. Go on right side.
                low = partitionX + 1;
            }
        }

        //dummy return statement which never actually gets executed just for the compiler
        return  -1.0;
    }
};
