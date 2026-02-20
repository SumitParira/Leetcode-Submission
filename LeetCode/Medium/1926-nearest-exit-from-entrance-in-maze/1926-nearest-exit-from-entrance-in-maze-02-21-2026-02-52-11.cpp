class Solution {
public:
vector<vector<int>> directions {{0,1},{0,-1},{1,0},{-1,0}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size();
        int n=maze[0].size();

        queue<pair<int,int>> que;

        que.push({entrance[0],entrance[1]});

        maze[entrance[0]][entrance[1]] = '+';

        int steps = 0;

        while(!que.empty()){
            int N=que.size();

            while(N--){

            pair<int,int> temp = que.front();
            que.pop();

            int i = temp.first;
            int j = temp.second;


            if((temp!=make_pair(entrance[0],entrance[1]))&&(i==0||i==m-1||j==0||j==n-1)) return steps;

    for(auto &dir :directions){
        int new_i = i+dir[0];
        int new_j = j+dir[1];

       if(new_i >=0 && new_i<m && new_j>=0 && new_j<n && maze[new_i][new_j]!='+') {que.push({new_i,new_j});
       maze[new_i][new_j]='+';}
    }}

    steps++;


        }

        return -1;

    }
};


// ------------------------xxxxxxxxxxxxxxxxxxxxxxx-----------------
// dfs approach got tle 
// class Solution {
// public:
// int finalcount = INT_MAX;
// int n;
// int m;
// vector<int> value;
// void solve(vector<vector<char>>& maze,int i,int j,int count){
//     if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && !(i == value[0] && j == value[1])) {
//     finalcount = min(finalcount, count);
//     return;
// }
// if(count>=finalcount) return;
// maze[i][j] = '+';
   
// if (i+1 < n && maze[i+1][j] == '.') solve(maze, i+1, j, count+1);
// if (i-1 >= 0 && maze[i-1][j] == '.') solve(maze, i-1, j, count+1);
// if (j+1 < m && maze[i][j+1] == '.') solve(maze, i, j+1, count+1);
// if (j-1 >= 0 && maze[i][j-1] == '.') solve(maze, i, j-1, count+1);

// maze[i][j]='.';

// }

//     int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
//         int count = 0;
//         value=entrance;
//          n=maze.size();
//          m=maze[0].size();
//          solve(maze,entrance[0],entrance[1],count );

//         return (finalcount==INT_MAX)?-1:finalcount;
//     }
// };