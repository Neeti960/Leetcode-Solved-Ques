class Solution {
public:
    
    int numRookCaptures(vector<vector<char>>& board) {
    int x,y,flag=0,count=0;
    for (int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j]=='R'){
                x=i;
                y=j;
                flag=1;
                break;
            }
        }
        if (flag==1)
        break;
    }  
    for(int i=x-1;i>=0;i--){
        if (board[i][y]=='B')
        break;
    
        else if (board[i][y] == 'p'){
        count++;
        break;
        }
    }
    for(int j=y+1;j<8;j++){
        if (board[x][j]=='B')
        break;
    
    else if (board[x][j] == 'p'){
        count++;
        break;
    }
    }
    for(int i=x+1;i<8;i++){
        if (board[i][y]=='B')
        break;
    
    else if (board[i][y] == 'p'){
        count++;
        break;
    }
    }
    for(int j=y-1;j>=0;j--){
        if (board[x][j]=='B')
        break;
    
    else if (board[x][j] == 'p'){
        count++;
        break;
    }
    }
     return count;
    }
};
