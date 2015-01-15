/**
 * Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 * For example:
 *    1 -> A
 *    2 -> B
 *    3 -> C
 *    ...
 *    26 -> Z
 *    27 -> AA
 *    28 -> AB
 */

class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while (n > 0) {
            result.push_back(static_cast<char>('A' + ((n - 1) % 26)));
            n = (n - 1) / 26;
        }
        for (size_t i = 0; i < result.length() / 2; ++i) {
            std::swap(result[i], result[result.length() - i - 1]);
        }
        return result;
    }
};
