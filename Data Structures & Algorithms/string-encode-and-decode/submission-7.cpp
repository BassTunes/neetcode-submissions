class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (const auto& str : strs) {
            encoded += str + '\n';
        }
        return encoded;
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
