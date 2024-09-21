class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> sum;
        sum.push_back(0);
        int max = 0;
        for(int i = 0; i<gain.size(); i++){
            int num = gain[i]+sum[i];
            sum.push_back(num);
            
        }
        for(int i = 0; i<sum.size(); i++){
            if(max< sum[i]){
                max = sum[i];
            }
        }
        return max;
    }
};
