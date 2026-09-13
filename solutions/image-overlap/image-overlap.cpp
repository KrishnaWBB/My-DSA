class Solution {
public:

    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<vector<int>>ones2;
        vector<vector<int>>ones1;
        map<vector<int> , int>freq;
        for(int i = 0 ; i < img2.size() ; i++){
            for( int  j = 0 ; j < img2[0].size() ; j++){
                if (img2[i][j]){
                ones2.push_back({i,j});
                }
                if (img1[i][j]){
                ones1.push_back({i,j});
                }
            }
        }
        
        for(int  i  = 0 ; i < ones2.size() ; i++){
            for(int j = 0 ; j < ones1.size() ; j++){
                vector<int>temp(2);
                temp[0] = ones2[i][0] - ones1[j][0];
                temp[1] = ones2[i][1] - ones1[j][1];
                freq[temp]++;
            }
        }
        int maxi = 0;
        for(auto it : freq){
            maxi = max(maxi , it.second);
        }
        return maxi;
    }
};