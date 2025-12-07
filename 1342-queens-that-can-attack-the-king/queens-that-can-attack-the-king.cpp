class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<bool>> board(8, vector<bool>(8, false));


        for(int i=0;i<queens.size();i++){
            board[queens[i][0]][queens[i][1]] = true;
        }
        int r = king[0],c=king[1];
        vector<vector<int>>res;
        // row-right
        for(int i = c;i<8;i++){
            if(board[r][i]){
                res.push_back({r,i});
                break;
            }
        }
        // row - left
        for(int i=c;i>=0;i--){
            if(board[r][i]){
                res.push_back({r,i});
                break;
            }
        }
        // up
        for(int i=r;i>=0;i--){
            if(board[i][c]){
                res.push_back({i,c});
                break;
            }
        }
        // down
        for(int i=r;i<8;i++){
            if(board[i][c]){
                res.push_back({i,c});
                break;
            }
        }
        // left-up diagnol
        int row=r-1,col=c-1;
        while(row >= 0 && col >=0){
             if(board[row][col]){
                res.push_back({row,col});
                break;
             }
             row--;
             col--;
        }
        // right-up diagnol
        row = r-1,col=c+1;
        while(row >= 0 && col < 8){
             if(board[row][col]){
                res.push_back({row,col});
                break;
             }
             row--;
             col++;
        }

        // left-down diagnol
        row = r+1,col=c-1;
        while(row < 8 && col >=0){
            if(board[row][col]){
                res.push_back({row,col});
                break;
             }
             row++;
             col--;
        }
        // right-down diagnol
        row = r+1,col=c+1;
        while(row < 8 && col < 8){
            if(board[row][col]){
                res.push_back({row,col});
                break;
             }
             row++;
             col++;
        }
        return res;
    }
};