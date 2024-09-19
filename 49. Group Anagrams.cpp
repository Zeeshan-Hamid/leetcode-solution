class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapp;

        for(auto x : strs){
            string word = x;
            sort(word.begin(), word.end());
            mapp[word].push_back(x);
        }

        vector<vector<string>> ans;

        for(auto x: mapp){
            ans.push_back(x.second);
        }
        return ans;

        
    }
};