//O(n) time and O(1) Aux Space Complexity Solution
//It is the most efficient solution



//The Below Solution is just the concept of our most efficient solution 

// int findRepeating(int arr[], int n)
// {
//     int slow= arr[0] , fast=arr[0];
//     do{
//         slow = arr[0];
//         fast= arr[arr[fast]];

//     }  while(slow != fast)

//     slow= arr[0];

//     while( slow != fast)
//     {
//         slow = arr[slow];
//         fast = arr[fast];
//     }
//     return slow;
// }


//Modified Solution and which is most eficient is

int findRepeating(int arr[] , int n)
{
    int slow= arr[0]+1, fast=arr[0]+1;
    do{
        slow= arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
      } while(slow!=fast)

      slow=arr[0]+1;

      while(slow!=fast)
      {
          fast=arr[fast] +1;
          slow = arr[slow] +1;

      }

      return slow-1;

}