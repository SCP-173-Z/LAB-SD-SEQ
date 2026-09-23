/*
================================================================================================
(2, 1, 3, 2, 4, 3, 5, ...)
================================================================================================
*/

#include <iostream>
using namespace std;

int numSeq (int n) {
    if (n % 2 == 0) {
        n /= 2;
        return n + 2;
    }
    else {
        n = (n - 1)/2;
        return n + 1;
    }

}

int main() {
    system("cls");

    int arr[3][3][4];
    int seq = 0;

    // Input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                arr[i][j][k] = numSeq(seq);
                seq++;
            }
            cout << "\n";
        }
        cout << "\n";
    }

    // Output
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
