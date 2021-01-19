int binarySearch(int arr[], int l, int u, int x) 
{ 
    if (u >= l) { 
        int mid = l + (u - l) / 2; 

        if (arr[mid] == x) 
            return mid; 
   
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        
        return binarySearch(arr, mid + 1, u, x); 
    }  
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 12, 14, 19, 23, 30, 40, 50 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 19; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result); 
    return 0; 
} 