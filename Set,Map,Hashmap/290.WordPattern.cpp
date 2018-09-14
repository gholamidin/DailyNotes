//
#include<iostream>
#include<sstream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> m;
        istringstream in(str);
        int i = 0;
        for (string word; in >> word; ++i) {
            if (m.find(pattern[i]) != m.end()) {
                if (m[pattern[i]] != word) return false;
            } else {
                for (unordered_map<char, string>::iterator it = m.begin(); it != m.end(); ++it) {
                    if (it->second == word) return false;
                }
                m[pattern[i]] = word;
            }
        }
        return i == pattern.size();
    }
};
int main(int argc, char const *argv[])
{

	string pattern ="abba";
	string str = "cat dog dog cat";
	bool res = Solution().wordPattern(pattern,str);
	if (res)
		cout << "true";
	else
		cout << "false";
	return 0;
}