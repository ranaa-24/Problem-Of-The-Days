int setBits(int N) {
        
        int count = 0;
        while(N){
            N = N & (N-1);      // it will keep discarding last set bit
            count++;
        }
        return count;
    }