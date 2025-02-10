#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    long long sumOfSeries(int n) {
        // Base case
        if (n == 0) {
            return 1;
        }
        // Recursive call
        return n * sumOfSeries(n - 1);
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Factorial : " << solution.sumOfSeries(n) << endl;
    return 0;
}
