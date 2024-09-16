class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int len = s.size();
       unordered_set<char> chSet;
       int left = 0;
        int maxL = 0;
       for(int right = 0; right< len; right++){
        if(chSet.count(s[right])==0){
            chSet.insert(s[right]);
            maxL = max(maxL, right-left +1); 
        }else{
            while(chSet.count(s[right])){
                chSet.erase(s[left]);
                left++;
            }
            chSet.insert(s[right]);
        }
       }

       return maxL;
    }
};
