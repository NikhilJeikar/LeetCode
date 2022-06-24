#include<bits/stdc++.h>

using namespace std;


inline bool Col(char Elem,int Row, vector<vector<char>> &Vec, vector<char> &Vec1,int Except,int Except1)
{
    for(int i = 0;i<9;i++)
    {
        if(Vec1[i] != '.' && i != Except1 && Vec1[i] == Elem) return false;
        if(Vec[i][Row] != '.' &&  i != Except && Elem == Vec[i][Row]) return false;
    }
    return true;
}

inline bool Box(char Elem,int x,int y, vector<vector<char>> &Vec ,int I,int J)
{
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {   
            if(Vec[x+i][y+j] != '.' && Elem == Vec[x+i][y+j] && x+i != I && y+j != J) return false;
        }
    }
    return true;
}

bool isValidSudoku(vector<vector<char>>& board) 
{
    int X = 0,Y = 0;
    for(int i = 0;i<9;i++)
    {
        for(int j = 0;j<9;j++)
        {
            if(i%3 == 0) 
            {
                X = i;
            }
            if(j%3 == 0)
            {
                Y = j;
            }
            if((Box(board[i][j],X,Y,board,i,j) && Col(board[i][j],j,board,board[i],i,j)) == false) return false;

        }   
    }
    return true;
}

int main()
{
vector<char> V0 = {'5','3','.','.','7','.','.','.','.'};
vector<char> V1 = {'6','.','.','1','9','5','.','.','.'};
vector<char> V2 = {'.','9','8','.','.','.','.','6','.'};
vector<char> V3 = {'8','.','.','.','6','.','.','.','3'};
vector<char> V4 = {'4','.','.','8','.','3','.','.','1'};
vector<char> V5 = {'7','.','.','.','2','.','.','.','6'};
vector<char> V6 = {'.','6','.','.','.','.','2','8','.'};
vector<char> V7 = {'.','.','.','4','1','9','.','.','5'};
vector<char> V8 = {'.','.','.','.','8','.','.','.','9'};
vector<vector<char>> Vec = {V0,V1,V2,V3,V4,V5,V6,V7,V8};

cout<<isValidSudoku(Vec)<<endl;
}