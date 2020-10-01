
#include <iostream> 
using namespace std; 
  

int Building(int arr[], int n) 
{ 
     
    int count = 1; 
  
    
    int curr_max = arr[0]; 
    for (int i=1; i<n; i++) 
    { 
        
        if (arr[i] > curr_max) 
        { 
            count++; 
            curr_max=arr[i]; 
        } 
    } 
  
    return count; 
} 
  

int main() 
{ 
    int arr[] = {1,2}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << Building(arr, n); 
    return 0; 
} 


