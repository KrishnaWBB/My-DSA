class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int n = m.size();
        int k = m[0].size();
  vector<int> ans;
  int rh = 0;
  int rl = n-1;
  int cl = 0;
  int ch = k-1;

  while (rh <= rl && cl <= ch){
    
    for(int i = cl ; i <= ch ; i++ ){
      ans.push_back(m[rh][i]);
    }
    rh ++ ;
    for(int i = rh ; i <= rl ; i++ ){
      ans.push_back(m[i][ch]);
    }
    ch --;
    if(rh <= rl){
    for(int i = ch ; i >= cl ; i-- ){
      ans.push_back(m[rl][i]);
    }
    }
    rl--;
    if(cl <= ch){
    for(int i = rl ; i >= rh ; i-- ){
      ans.push_back(m[i][cl]);
    }
    }
    cl++;
  }
  return ans;
    }
};