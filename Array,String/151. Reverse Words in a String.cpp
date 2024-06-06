#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<string> vec;
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    vec.push_back(word);
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            vec.push_back(word);
              word="";
        }

        string ans = "";


        for (int i = vec.size() - 1; i >= 0; i--) {
            ans += vec[i];
          //  cout<<vec[i]<<endl;
            if (i > 0) {
                ans += ' ';
            }
        }

        return ans;
    }
};
