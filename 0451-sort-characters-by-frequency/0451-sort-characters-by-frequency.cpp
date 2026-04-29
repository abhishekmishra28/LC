class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char c : s) freq[c]++;
        priority_queue<pair<int,char>> pq;
        for(const auto &fre : freq){
            pq.push({fre.second, fre.first});
        }
        string ans;
        while(!pq.empty()){
            auto [f,c] = pq.top();
            pq.pop();
            ans += string(f,c);
        }
        return ans;
    }
};