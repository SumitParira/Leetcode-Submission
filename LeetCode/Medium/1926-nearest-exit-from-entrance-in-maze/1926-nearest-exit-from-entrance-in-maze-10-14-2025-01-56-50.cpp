class Solution {
public:
int finalcount = INT_MAX;
int n;
int m;
vector<int> value;
void solve(vector<vector<char>>& maze,int i,int j,int count){
    if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && !(i == value[0] && j == value[1])) {
    finalcount = min(finalcount, count);
    return;
}
if(count>=finalcount) return;
maze[i][j] = '+';
   
if (i+1 < n && maze[i+1][j] == '.') solve(maze, i+1, j, count+1);
if (i-1 >= 0 && maze[i-1][j] == '.') solve(maze, i-1, j, count+1);
if (j+1 < m && maze[i][j+1] == '.') solve(maze, i, j+1, count+1);
if (j-1 >= 0 && maze[i][j-1] == '.') solve(maze, i, j-1, count+1);

maze[i][j]='.';

}

    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int count = 0;
        value=entrance;
         n=maze.size();
         m=maze[0].size();
         solve(maze,entrance[0],entrance[1],count );

        return (finalcount==INT_MAX)?-1:finalcount;
    }
};