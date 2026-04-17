class Solution {
public:
    void dfs(int sr, int sc, vector<vector<int>>& image, int ogColor, int color){
        int n = image.size();
        int m = image[0].size();
        if(sr<0 || sc<0 || sr>=n || sc>=m ) return;
        if(image[sr][sc] != ogColor) return;
        image[sr][sc] = color;
        dfs(sr+1,sc,image,ogColor,color);
        dfs(sr,sc+1,image,ogColor,color);
        dfs(sr-1,sc,image,ogColor,color);
        dfs(sr,sc-1,image,ogColor,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ogColor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        if(ogColor == color) return image;
        dfs(sr,sc,image,ogColor,color);
        return image;
    }
};