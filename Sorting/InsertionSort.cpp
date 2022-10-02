

#include <iostream>
#include <climits>

using namespace std;


void insertion_sort (int arr[], int n)
{
    
    for (int itr = 1; itr <= n-1; itr++)
    
    {
        
        int e = arr[itr];
        
        int j = itr-1; 
        
        while (j>=0 && arr[j] > e)   
        {
            
            arr[j+1] = arr[j];
            j = j-1;         
            
        }
        
        arr[j+1] = e;
        
    }
    
    
    
    
    
}



int main()
{
    
    int num, key;
    
    cout << "Enter the number of elements in array: ";
    cin >> num;   
    
    int a[1000]; 
    for (int i = 0; i < num; i++)
    {
        
        cin >> a[i];
        
    }
    
    insertion_sort(a,num);
    
    for (int i =0; i<num; i++)
    {
        
        cout << a[i] << " , ";
        
    }
    
    return 0;
}
