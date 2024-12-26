#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;

    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
        result %= 10000;
    }

cout <<setw(4) <<setfill('0') << result <<endl;
    return 0;
}
