class Solution {
public:
int n;
int m;
int startColor;
void dfs(vector<vector<int>>& image, int sr, int sc, int color){
 if(sr>=n || sr<0 || sc>=m || sc<0 || image[sr][sc]==color || image[sr][sc]!=startColor) return ;

 image[sr][sc]=color;

 dfs(image ,sr+1,sc,color);
 dfs(image ,sr-1,sc,color);
 dfs(image ,sr,sc+1,color);
 dfs(image ,sr,sc-1,color);


 

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

         n = image.size();
         m = image[0].size();

         startColor=image[sr][sc];

         if (startColor == color) return image;

        dfs(image ,sr,sc,color);

        return image;
    }
};