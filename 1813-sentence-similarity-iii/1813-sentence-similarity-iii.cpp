class Solution {
public:
    vector<string> findWords(string sentence) {
        vector<string> words;

        int n = sentence.length();
        int x = 0;
        while (x < n) {
            string word = "";
            while (x < n && sentence[x] != ' ') {
                word.push_back(sentence[x]);
                x = x + 1;
            }
            words.push_back(word);

            x = x + 1;
        }

        return words;
    }
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> words1 = findWords(sentence1);
        vector<string> words2 = findWords(sentence2);

        int len1 = words1.size();
        int len2 = words2.size();
        int l1 = 0;
        int l2 = 0;
        while (l1 < len1 && l2 < len2 && words1[l1] == words2[l2]) {
            l1 = l1 + 1;
            l2 = l2 + 1;
        }
        int r1 = len1-1;
        int r2 = len2-1;
        while (r1 >= 0 && r2 >= 0 && words1[r1] == words2[r2]) {
            r1 = r1 - 1;
            r2 = r2 - 1;
        }
        if (l1 > r1 || l2 > r2) {
            return true;
        }

        return false;
    }
};