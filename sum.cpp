#include <iostream>
#include <vector>
//https://codeforces.com/contest/1742/problem/A
int main()
{
    int n;
    std::cin >> n;
    //int *res = new int[n];
    std::vector<int> res(n);
    for (int i = 0; i < n; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b) {
            res[i] = 1;
        }
        else res[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        if (res[i] == 1)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    //delete[] res;
    return 0;
}