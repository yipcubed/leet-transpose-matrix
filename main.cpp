#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/transpose-matrix/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>> &A) {
        if (A.empty()) return A;
        int cols = A.size();
        int rows = A[0].size();
        vector<vector<int>> B(rows);
        for (int r = 0; r < rows; ++r) {
            B[r].resize(cols);
            for (int c = 0; c < cols; ++c) {
                B[r][c] = A[c][r];
            }
        }
        return B;
    }
};

void test1() {
    vector<vector<int>> v1{
            vector<int>{1, 2, 3},
            vector<int>{4, 5, 6},
            vector<int>{7, 8, 9}
    };

    cout << " ? " << Solution().transpose(v1) << endl;

    vector<vector<int>> v2{
            vector<int>{1, 2, 3},
            vector<int>{4, 5, 6}
    };

    cout << " ? " << Solution().transpose(v2) << endl;
}

void test2() {

}

void test3() {

}