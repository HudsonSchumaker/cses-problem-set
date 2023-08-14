#include <bits/stdc++.h>
 
int main() {
    long long n, s = 0;
    std::cin >> n;
    for(long long i = 1; i < n; ++i) {
        long long a;
        std::cin >> a;
        s += a; 
    }
     std::cout << n*(n + 1)/2 - s;
}
