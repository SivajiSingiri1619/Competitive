class Spreadsheet {
public:
   vector<vector<int>> sheets;
    Spreadsheet(int rows) {
        
       sheets =  vector<vector<int>>(rows+1,vector<int>(26,0));

    
}    void setCell(string cell, int value) {
        
         int col = cell[0] - 'A';
         int row = stoi(cell.substr(1));

         sheets[row][col] = value;
    }
    
    void resetCell(string cell) {
        int col = cell[0] - 'A';
         int row = stoi(cell.substr(1));

         sheets[row][col] = 0;
    }
    
    int getValue(string formula) {
        
          string str = formula.substr(1);
          stringstream ss(str);
          vector<string>vec;
          string temp;
          while(getline(ss,temp,'+')){
                vec.push_back(temp);
          }
          int val1,val2;
          if(vec[0][0] >= 'A' && vec[0][0] <= 'Z'){
             int col = vec[0][0] - 'A';
             int row = stoi(vec[0].substr(1));
             val1 = sheets[row][col];
          }
          else{
                val1 = stoi(vec[0]);
          }
          

          if(vec[1][0] >= 'A' && vec[1][0] <= 'Z'){
             int col = vec[1][0] - 'A';
             int row = stoi(vec[1].substr(1));
             val2 = sheets[row][col];
          }
          else{
             val2 = stoi(vec[1]);
          }

          return val1+val2;
         
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */