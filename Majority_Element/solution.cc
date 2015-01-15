/*
 * Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 * You may assume that the array is non-empty and the majority element always exist in the array.
 *
 *
 */

ass Solution {
public:
    int majorityElement(vector<int> &num) {
        int count = 0;
        int majority_element = 0;
        for (vector<int>::const_iterator iter = num.begin(); iter != num.end(); ++iter) {
            if (count == 0) {
                count = 1;
                majority_element = *iter;
            } else {
                if (majority_element != *iter) {
                    --count;
                } else {
                    ++count;
                }
            }
        }
        return majority_element;
    }
};
