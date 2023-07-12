int missingNumber(int arr[], int n) 
    { 
        for(int i=0; i<n; i++){
            if(arr[i] <= 0 || arr[i] > n)
                arr[i] = n+1;
        }
        
        for(int i=0; i<n; i++){
            
            if((abs(arr[i])- 1) >= n)
                continue;
                
            if(arr[abs(arr[i]) - 1] > 0)
                arr[abs(arr[i]) - 1] = (-1)* arr[abs(arr[i]) - 1];
        }
        
        
        for(int i = 0; i<n; i++){
            if(arr[i] > 0)
                return i+1;
        }
        return n+1;
    }