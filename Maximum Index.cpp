class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        
        vector<int> minArr(n), maxArr(n);
        minArr[0] = arr[0];
        maxArr[n-1] = arr[n-1];
        int maxIdx = 0;
        int currMin = minArr[0];
        int currMax = maxArr[n-1];
        for(int i=1; i<n; i++){
            currMin = min(arr[i], currMin);
            currMax = max(arr[n-i-1], currMax);
            
            minArr[i] = currMin;
            maxArr[n-i-1] = currMax;
        }
        
        //check 
        int i=0;
        int j=0;
        while(i<n && j<n){
            while(j<n && minArr[i]<=maxArr[j]){
                j++;
            }
            maxIdx = max(maxIdx, j-i-1);
            i++;
        }
        return maxIdx;
    }
};class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        
        vector<int> minArr(n), maxArr(n);
        minArr[0] = arr[0];
        maxArr[n-1] = arr[n-1];
        int maxIdx = 0;
        int currMin = minArr[0];
        int currMax = maxArr[n-1];
        for(int i=1; i<n; i++){
            currMin = min(arr[i], currMin);
            currMax = max(arr[n-i-1], currMax);
            
            minArr[i] = currMin;
            maxArr[n-i-1] = currMax;
        }
        
        //check 
        int i=0;
        int j=0;
        while(i<n && j<n){
            while(j<n && minArr[i]<=maxArr[j]){
                j++;
            }
            maxIdx = max(maxIdx, j-i-1);
            i++;
        }
        return maxIdx;
    }
};