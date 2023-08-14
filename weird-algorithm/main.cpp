#include <bits/stdc++.h>
 
int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << n;
    while (n > 1) {
        if ( n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }   
        std::cout << " " << n;
    }
}
