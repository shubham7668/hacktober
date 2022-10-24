class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int start = 0;
        int end = arr.size() -1;
        int mid;
        while(start<end){
            mid = start +(end-start) /2;
            if(arr[mid]<arr[mid+1]){
                start = mid+1;
            }
            else if(arr[mid]>arr[mid+1]){
                end = mid;
            }
            // else{
            //     return arr[start];
            // }
        }
        return start;
    }
};
