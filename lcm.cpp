#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}

