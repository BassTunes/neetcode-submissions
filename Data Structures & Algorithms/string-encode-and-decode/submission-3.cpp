class Solution {
public:

    string encode(vector<string>& strs) {
        std::string oneStr;
        for (auto&& word : strs) {
            if (!word.empty())
                oneStr += word;
            oneStr += '\n';
        }
        return oneStr;
    }

    vector<string> decode(string s) {
        std::stringstream ss(s);
        std::vector<std::string> result;
        std::string word;
        while (getline(ss, word, '\n')) {
            result.push_back(word);
        }
        return result;
    }
};
