class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int ele = arr[0];
    int  c = 0;

    for(int i = 0 ; i< arr.size()-1 ; i++ ){
        if(ele == arr[i]) c++;
        else if (ele != arr[i])c--;
        if(c == 0) ele = arr[i+1];
    }
    return ele;
    }
};