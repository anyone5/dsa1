#include <iostream>
#include <vector>
#include <algorithm>
//https://codeforces.com/contest/863/problem/B
int main()
{
    int n, sum;
    std::cin >> n;
    n = n * 2;
    std::vector<int> weights(n);
    for (auto i = 0; i != n; i++) {
        std::cin >> weights[i];
    }
    std::sort(weights.begin(), weights.end());
    int mINT = INT_MAX;
    for (auto i = 0; i != n-1; i++) {
        for (auto j = i + 1; j < n; j++) {
            sum = 0;
            std::vector<int> tmp;
            for (auto k = 0; k < n; k++) {
                if (k != i && k != j) {
                    tmp.push_back(weights[k]);
                }
            }
            for (auto k = 0; k < tmp.size(); k+=2) {
                sum += tmp[k + 1] - tmp[k];
            }
            mINT = std::min(mINT, sum);
        }
    }
    std::cout << mINT;
    return 0;
}