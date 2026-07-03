class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        vector<int>t;
    int x =-1;
    for(int i = arr.size() -1 ; i> 0 ; i--){
        if(arr[i-1] < arr[i]){
            x=i-1;
            break;
        }
       
        
    }
    if(x==-1){
        reverse(arr.begin() , arr.end());
        return;
    }
    
    

    for(int i = arr.size() -1 ; i> x ; i--){
        if(arr[i] > arr[x]){
            
            swap(arr[i],arr[x]);
            break;
        }
    }
    reverse(arr.begin()+x+1 , arr.end());
    return;
    }
};