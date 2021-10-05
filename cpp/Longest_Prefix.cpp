#include <string>
#include<vector>

using namespace std;

// Given an array of strings return the common prefix if any else return an empty string.

string longestCommonPrefix(vector<string>& str) {
        if(str.empty()) return "";
        
        for (int i=0 ;; i++){
            for(auto& _str : str)
            {
                if(i >= _str.size() || _str[i] != str[0][i])
                    return str[0].substr(0,i);
            }
        }
        
        return "";
    }