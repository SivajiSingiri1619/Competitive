class Solution {
public:
    int countCollisions(string directions) {
        if(directions.size() <= 1) return 0;
        char curr = directions[0];
        int r = (curr == 'R')?1:0;
        int res = 0;
        for(int i=1;i<directions.size();i++){
            
            if(curr == directions[i] && curr == 'R') r++;

            else if(curr != directions[i]){
                if(curr == 'R' && directions[i] == 'L'){ 
                    res += 2;
                    if(r != 0) res += (r-1);
                    curr = 'S';
                   r=0;
                    }
                
                else if(curr == 'S' && directions[i] == 'L'){
                    res += 1;
                   r=0;
                }

                else if(curr == 'R' && directions[i] == 'S'){
                    res += 1;
                    if(r != 0) res += (r-1);
                    r=0;
                    curr = 'S';
                }
               else{
                curr = directions[i];
                if(curr == 'R') r++;
               }

               
            }

            
        }
        return res;
    }
};