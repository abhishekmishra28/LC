class Solution {
public:
    string reverseWords(string s) {
        int i=0, j=0, n=s.size();
        while(j<n){
            while(j<n && s[j]==' ') j++;
            while(j<n && s[j]!=' ') s[i++] = s[j++];
            while(j<n && s[j]==' ') j++;
            if(j<n) s[i++] = ' ';
        }
        s.resize(i);
        reverse(s.begin(),s.end());
        n = s.length();
        int left=0;
        while(left<n){
            while(left<n && s[left]==' '){
                left++;
            }
            int right = left;
            while(right<n && s[right]!=' '){
                right++;
            }

            reverse(s.begin()+left,s.begin()+right);
            left = right;
        }
        return s;
    }
};