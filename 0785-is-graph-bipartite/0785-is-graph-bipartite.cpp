class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n,-1);
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                color[i] = 0;
                q.push({i,0});
                while(!q.empty()){
                    int node = q.front().first;
                    int currColor = q.front().second;
                    q.pop();
                    for(auto it : graph[node]){
                        if(color[it]==-1){
                            color[it] = 1-currColor;
                            q.push({it,1-currColor});
                        }else if(color[it]==color[node]) return false;
                    }
                }
            }
        }
        return true;
    }
};