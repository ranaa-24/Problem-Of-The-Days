/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
       sort(arr, arr+n);
       
       for(int i=0; i<n-2; i++){
           int x = arr[i];
           int l = i+1;
           int r = n-1;
           while(l<r){
               if(x+arr[l]+arr[r] == 0) 
                    return true;
                else if(x + arr[l] +arr[r] < 0)
                    l++;
                else
                    r--;
           }
       }
       return false;
    }
};