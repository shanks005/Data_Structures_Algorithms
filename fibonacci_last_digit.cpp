#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    n = n % 60; // Pisano period for mod 10 is 60
    int a = 0, b = 1;
    for (long long i = 2; i <= n; ++i) {
        int c = (a + b) % 10;
        a = b;
        b = c;
    }
    cout << (n == 0 ? 0 : b) << endl;
    return 0;
}

