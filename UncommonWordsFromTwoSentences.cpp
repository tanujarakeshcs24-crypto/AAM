class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count;
        stringstream ss(s1 + " " + s2);
        string word;
        
        while (ss >> word) {
            count[word]++;
        }
        
        vector<string> result;
        for (const auto& pair : count) {
            if (pair.second == 1) {
                result.push_back(pair.first);
            }
        }
        
        return result;
    }
};