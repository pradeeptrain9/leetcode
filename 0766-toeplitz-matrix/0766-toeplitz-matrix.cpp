class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix[0].size()-1;i++){
                int j=i;
                int r=0;
                int check=matrix[0][i];
        while(r<matrix.size() && j<matrix[0].size()){
             //cout<<check;
            if(matrix[r][j]!=check)
                   return false;
            r++,j++;
           
        }
}
    for(int i=1;i<matrix.size()-1;i++){
                int j=i;
                int r=0;
                int check=matrix[i][0];
             
        while(j<matrix.size() && r<matrix[0].size()){
             //cout<<check<<endl;
            if(matrix[j][r]!=check)
                return false;
            j++;
            r++;
        }
}
    return true;
    }
};