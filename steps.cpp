#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2) {
            return n;
        } else {
            std::vector<int> step(n + 1, 0);

            step[1] = 1;
            step[2] = 2;

            for (int i = 3; i <= n; i++) {
                step[i] = step[i - 1] + step[i - 2];
            }

            return step[n];
        }
    }
};

int main() {
    Solution solution;
    int n;
    cin>>n; 
   
    int result = solution.climbStairs(n); 
    cout <<  result;

    return 0;
}
