#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }

        for (int k = 0; k < i; k++) {
            if (k > 0) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
