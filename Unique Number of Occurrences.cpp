//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        
        unordered_set<int>freqSet;
        for(auto i : freq){
            freqSet.insert(i.second);
        }
        
        return freq.size()==freqSet.size();
    }
};



// EXPLANATION : 
//  Storing the count of each element using map and then store these count of each element as the value of each element of a set.
// If size of set is less than the map then return false (Because Set stores only Unique Elements).

 

// Steps :

// Create an unordered map called frequencies to store the frequencies of each number in the array.
// Iterate through the array and for each number, increment its frequency in the frequencies map.
// Create an unordered set called frequencySet to store the unique frequencies.
// Iterate through the frequencies map and insert each frequency value into the frequencySet.
// Check if the size of the frequencySet is equal to the size of the frequencies map. If they are equal, it means that all frequencies are unique, so return true. Otherwise, return false.