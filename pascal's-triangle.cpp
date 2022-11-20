class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector <vector <int>> v;
    for(int i=0;i<numRows;i++){
        vector <int> temp(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                temp[j]=1;
            }
            else{
               temp[j]=v[i-1][j-1]+v[i-1][j];
            }
        }
        v.push_back(temp);
    }
    return v;
    }
};
