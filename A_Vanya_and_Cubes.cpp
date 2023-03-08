#include <iostream>
using namespace std;

int main() {
    int a, i = 0, last = 0, current = 0;
    cin >> a;
    while (a > 0) {
        i++;
        current = last + i;
        last = current;
        a -= current;
        if (a < 0) {
            i--;
        }
    }
    cout << i;
}