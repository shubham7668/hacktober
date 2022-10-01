public class binarysearch {
    public static void main(String[] args) {
      int nums[]={1,2,3,4,5,6,48,459,12,549}; 
      int target = 48;
      int s =0;
      int e = nums.length -1;
      int ans = search(nums, target,s,e);
      System.out.println(ans); 
    }
    public static int search(int nums[], int target, int s, int e) {
        if(s>e){
            return -1;
        } 
         int m = s+ (e-s)/2;
         if(nums[m] == target){
             return m;
         }
         if(target < nums[m]){
             return search(nums, target, s, m-1);
         }
         return search(nums, target, m+1, e);
     }
}
