#include <iostream>
#include <string>
//https://codeforces.com/problemset/problem/863/A
int main()
{
    std::string str;
    std::cin >> str;
    bool isPal = true, lZero = true;
    auto i = str.rbegin();
    auto j = str.begin();
    for (auto i = str.rbegin(); i != str.rend(); ++i) {
        while (*i == '0' && lZero) {
            i++;
        }
        lZero = false;
        if (*i != *j) {
            isPal = false;
            break;
        }
        else {
            j++;
        }
    }

    if (isPal)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}

