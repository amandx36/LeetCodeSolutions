class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      int n = board.size();

      // checking the rows 
      for(int i = 0 ; i < n ; i++){
        // making unordered map for check 
        unordered_set<char> rowBag ;
        for(int j = 0  ; j < n ; j++){
          if(board[i][j]=='.') continue;
          if(rowBag.count(board[i][j])) return false ;
          rowBag.insert(board[i][j]);
        }

      }

      // checking the column bag dude 
       for(int i = 0 ; i < n ; i++){
        // making unordered map for check 
        unordered_set<char> columnBag ;
        for(int j = 0  ; j < n ; j++){
          if(board[j][i]=='.') continue;
          if(columnBag.count(board[j][i])) return false ;
          columnBag.insert(board[j][i]);
        }

      }


      // now checking the 3 X 3 box dude 
      // making the loop jump of 3 
      for(int rowSet = 0 ; rowSet< n ; rowSet+=3){
        for(int columnSet = 0 ; columnSet<n ; columnSet+=3){

          unordered_set<char>bag;
          for(int i  = rowSet ; i < rowSet+3 ; i++){
            for(int j = columnSet; j < columnSet+3 ; j++){
              if(board[i][j]=='.') continue;
               if(bag.count(board[i][j])) return false ;
          bag.insert(board[i][j]);

            }

          }

        }
      }
      return true ;

        
    }
};