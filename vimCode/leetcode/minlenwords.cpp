#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <climits>
using namespace std;

string shortestCompletingWord(string licensePlate, vector<string>& words) {
    unordered_map<char, int> umap;
    int lenLP = 0;
    for(const auto& ch : licensePlate) {
        char tmp = tolower(ch);
        if(tmp >= 'a' && ch <= 'z') {
            ++umap[tmp];
            ++lenLP;
        }
    }
    // vector<string> words = {"suggest","letter","of","husband","easy","education","drug","prevent","writer","old"};
    int minLen = INT_MAX;
    string ans;
    for(int i = 0; i < words.size(); ++i) {
        unordered_map<char, int> ucopy{umap.begin(), umap.end()};
        int len = words[i].length();
        if(len < lenLP) {
            continue;
        }
        for(const auto& c : words[i]) {
            if(ucopy.find(c) != ucopy.end()) {
                --ucopy[c];
            }
            if(ucopy.find(c) != ucopy.end() && ucopy[c] == 0) {
                ucopy.erase(c);
            }
        }
        if(ucopy.size() == 0 && minLen > len) {
            minLen = len;
            ans = words[i];
        }
    }
    return ans;
}

int main()
{
    string licensePlate = "Ah71752";
    vector<string> words = {"suggest","letter","of","husband","easy","education","drug","prevent","writer","old"};
    string ans = shortestCompletingWord(licensePlate, words);
    cout << ans << endl;
    return 0;
}