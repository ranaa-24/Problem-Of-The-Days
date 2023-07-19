class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& n) {
        vector<bool>isSeen(size(n) + 1);
        vector<int>ans;
        for(auto i:n) isSeen[i] = true;     // true which has been seen in the array
        for(int num=1; num<=size(n); num++)
            if(!isSeen[num])               // if not seen then push the n
                ans.push_back(num);
        return ans;
    }
};