class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<vector<int>> ans;
        int mini = INT_MAX;
        priority_queue<pair<int,vector<int>>> pq;
        for(auto &p : points){
            int dist = p[0]*p[0] + p[1]*p[1];
            pq.push({dist,p});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};