class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> ans;
        int left = 0;
        int right = m - 1;
        int top = 0;
        int nicha = n-1;

        
        while(top <= nicha && left <= right){

            for(int j = left; j <= right ; j++){
                ans.push_back(matrix[top][j]);
            }
            top++;
            for(int j = top; j <= nicha; j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            if(top <= nicha){
                for(int j = right;j >= left ;j-- ){
                    ans.push_back(matrix[nicha][j]);
                }
                nicha--;
            }
            if(left <= right){
                for(int j = nicha;j >= top;j++){
                    ans.push_back(matrix[left][j]);
                }
                left++;
            }

        }
        return ans;
        

        
    }

};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
 
  int n = matrix.size(); // no. of nows
  int m = matrix[0].size(); // no. of columns
  
  // Initialize the pointers reqd for traversal.
  int top = 0, left = 0, bottom = n - 1, right = m - 1;

  // Loop until all elements are not traversed.
  while (top <= bottom && left <= right) {
      
    // For moving left to right
    for (int i = left; i <= right; i++)
      ans.push_back(matrix[top][i]);

    top++;

    // For moving top to bottom.
    for (int i = top; i <= bottom; i++)
      ans.push_back(matrix[i][right]);

    right--;
    
    // For moving right to left.
    if (top <= bottom) {
      for (int i = right; i >= left; i--)
       ans.push_back(matrix[bottom][i]);

      bottom--;
    }

    // For moving bottom to top.
    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        ans.push_back(matrix[i][left]);

      left++;
    }
  }
  return ans;
        
    }
};