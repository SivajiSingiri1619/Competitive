class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
         vector<vector<int>> res = board;
         int top = 0,bottom = 1;
         int m = board.size(),n= board[0].size();
         for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
                 int live = 0 , die = 0;

                //  top
                 if(i != 0){
                    if(board[i-1][j] == 1) live++;
                    else die++;
                 }
                // bottom
                 if(i != m-1){
                     if(board[i+1][j] == 1) live++;
                     else die++;
                 }
                // left
                 if(j != 0){
                    if(board[i][j-1] == 1) live++;
                     else die++;
                 }
                // right
                if(j != n-1){
                    if(board[i][j+1] == 1) live++;
                     else die++;
                }
                // up left
                if(i != 0 && j != 0){
                     if(board[i-1][j-1] == 1) live++;
                     else die++;
                }

                // up right
                if(i !=0 && j != n-1){
                     if(board[i-1][j+1] == 1) live++;
                     else die++;
                }

                // bt left
                if(i != m-1 && j != 0){
                     if(board[i+1][j-1] == 1) live++;
                     else die++;
                }
                // /bt right
                if(i != m-1 && j != n-1){
                     if(board[i+1][j+1] == 1) live++;
                     else die++;
                }


                if(board[i][j] == 1){
                    if(live == 2 || live == 3) res[i][j] = 1;
                    else res[i][j] = 0;
                }
                else{
                    if(live == 3) res[i][j] = 1;
                    else res[i][j] = 0;
                }
             }  

         }
        board = res;
        
    }
};