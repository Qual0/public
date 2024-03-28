#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n-1; ++i) {
        cout << "*";
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        cout << "*\n";
    }
    for (int u = 0; u < n; ++u) {
        cout << "*";
    }
}
