class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //brute force approach:
        //Take first element and iterate through the vector and check if the string is anagram of it or not.
        //Then move to the string which is anagram yet and compare others with it.
        
        //Better approach: To use map.
        unordered_map<string,vector<string>> mp;
        int n=strs.size();
        
        for(int i=0;i<n;i++){
            string temp=strs[i];  //we will store the string since we will need it for future use.
            //then sort the string
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);  //strings will be pushed into the bucket
        }
        
        //We have to return a vector of vectors
        vector<vector<string>> result;
        
        for(auto itr=mp.begin();itr!=mp.end();++itr){  //take an iterator for the map and iterate it from begin to end and then go on pushing itr->second
            result.push_back(itr->second);
        }
        
        return result;
    }
};