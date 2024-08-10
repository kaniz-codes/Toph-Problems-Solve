#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int A;
    cin >> A;
    string number = to_string(A);
    int n = number.size();
    int count = n % 3;
    
    if (count == 0) count = 3;
    
    for (int i = 0; i < n; ++i) {
        cout << number[i];
        count--;

        if (count == 0 && i != n - 1) {
            cout << ',';
            count = 3;
        }
    }
    cout << endl;
    return 0;
}
