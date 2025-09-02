#include <iostream>
using namespace std;

int main() {
    int n = 7; // height of star

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Hardcoded pattern for a 5-point star shape
            if ((i == 0 && j == n / 2) ||                // top point
                (i == n / 2 && j == 0) ||                // left point
                (i == n / 2 && j == n - 1) ||            // right point
                (i == n - 1 && j == n / 2) ||            // bottom point
                (i + j == n / 2) ||                      // upper-left diagonal
                (j - i == n / 2) ||                      // upper-right diagonal
                (i - j == n / 2) ||                      // lower-left diagonal
                (i + j == n - 1 + n / 2))                // lower-right diagonal
                cout << ".";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
