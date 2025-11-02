#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Solution {
public:
    bool ft_helper(string s)
    {
        int j = s.size() - 1;
        int i = j - 1;
        // cout << i << "      " << j << "   " << s ;
        
        while (i >= 0)
        {
            if (s[i] == s[j])
            {
                // cout << "  false"<< endl;
                return (false);
            }
            // cout << i << endl;
            i--;
        }
        // cout << "   true"<< endl;
        return true;
    }
    int lengthOfLongestSubstring(string s)
    {
        int result = 0;
        int i = 0;

        while (i < s.size())
        {
            int j = i + 1;
            while (j < s.size() && ft_helper(s.substr(i,j + 1)))
            {
                cout << i << "  " << j << endl;
                j++;

            } 
                
            if (j - i > result)
                result = j - i;
            i++;
            cout << i << "  " << j << endl;
        }
        return result;
    }
};

