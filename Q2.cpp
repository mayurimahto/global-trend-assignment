//Given a string, find the length of the longest substring without repeating characters.The function should return an integer representing the length of the longest substring without repeating characters.

#include <iostream>
#include <string>
using namespace std;

int longestUniqueSubsttr(string str)
{
    if (str.length() == 0)
        return 0;

    if (str.length() == 1)
        return 1;

    int maxLength = 0;
    bool visited[256] = { false };
  
    int left = 0, right = 0;
    while (right < str.length()) {

        if (visited[str[right]] == true) {

            while (visited[str[right]] == true) {

                visited[str[left]] = false;
                left++;
            }
        }

        visited[str[right]] = true;
        maxLength = max(maxLength, (right - left + 1));
        right++;
    }
    return maxLength;
}

int main()
{
    string str = "abcabcbb";
    cout << "The input string is " << str << endl;
    int len = longestUniqueSubsttr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    return 0;
}
