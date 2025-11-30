#include<iostream>
#include<vector>
#include<string>
using namespace std;

// The N-Queens problem is a classic example of a backtracking algorithm.
// The goal is to place 'n' non-attacking queens on an 'n x n' chessboard.
// A queen can attack horizontally, vertically, and diagonally.

// Time Complexity = O(n!) because for each row, we try to place a queen, and the number of
// valid positions decreases as we place more queens. In the worst case, it's approximately n * (n-1) * (n-2) * ...
// Space Complexity = O(n*m) where 'n' is the number of rows and 'm' is the number of columns,
// for storing the chessboard. The recursive call stack also takes O(n) space.

// Function to print the chessboard
void print(vector<vector<char>> board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<< board[i][j]<<" ";
        }
        cout<<endl;
    } 
   
    cout<<"_---------------------------_\n";
}

// Function to check if placing a queen at a specific position (row, col) is safe
bool isSafe(vector<vector<char>> board,int n,int row,int col){
    // Check horizontal safety (no queen in the same row)
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }

    // Check vertical safety (no queen in the same column)
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    // Check upper-left diagonal safety
    for(int i=row,j=col;i>=0 && j>=0;i--, j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    // Check upper-right diagonal safety
    for(int i=row,j=col;i>=0 && j< n; i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    // If all checks pass, the position is safe
    return true;
}

// Recursive function to solve the N-Queens problem using backtracking
int nQueens( vector<vector<char>> board,int n,int row){
    // Base case: If all queens have been placed successfully, we found a solution.
    if(row==n){
        print(board,n); // Print the solution
        return 1; // Return 1 to count this solution
    }

    int count =0;
    // Iterate through all columns in the current row to find a safe spot for the queen
    for(int j=0;j<n;j++){
        // Check if placing a queen at (row, j) is safe
        if(isSafe(board,n,row,j)){
            // If safe, place the queen ('Q') on the board
            board[row][j]='Q';
            // Recursively call nQueens for the next row
            count+= nQueens(board,n,row+1);
            // Backtrack: remove the queen ('Q') to explore other possibilities
            board[row][j]='.';
        }
    }

    return count; // Return the total count of solutions found
}

int main(){
    vector<vector<char>> board;
    int n;
    cout<<"ent no. of queens want to be placed ";
    cin>>n;

    // Initialize the chessboard with empty spots ('.')
    for(int i=0;i< n;i++){
        vector<char> newRow;
        for(int j=0;j<n;j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    } 

    // Start the backtracking process from the first row (row 0)
    int count = nQueens(board,n,0);
    cout<<"\n";
    cout<<" count: "<<count<<endl;
    cout<<endl;

    return 0;
}