int setSetBit(int x, int y, int l, int r){
        l--;                // 0 based        //  11010   ->   43210(indices)
        r--;
        for(int i=l; i<=r; i++){
            x = x|(y&(1<<i));
        }
        return x;
    }