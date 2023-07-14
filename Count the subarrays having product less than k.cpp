int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod = 1, count = 0;
        int left = 0;
        int right;
        
        for(right = 0; right < n; right++){     // right always moves towards 
            prod *= a[right];
            
            while(prod >= k && left <= right){         // L<=R coz, assume the first ele is greater than k, then will ente in the loop and L will be devided, it will make prod 1 again 
                prod /= a[left];
                left++;
            }
            count += (right - left + 1);            //  including me (+1)
        }
        return count;
    }