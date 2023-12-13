#include <iostream>
#include <vector>

using namespace std;

int main() {
    int RA, CA;
    cin >> RA >> CA;

    vector<vector<int>> A(RA, vector<int>(CA));
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CA; j++) {
            cin >> A[i][j];
        }
    }

    int RB, CB;
    cin >> RB >> CB;

    vector<vector<int>> B(RB, vector<int>(CB));
    for (int i = 0; i < RB; i++) {
        for (int j = 0; j < CB; j++) {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> result(RA, vector<int>(CB, 0));
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            for (int k = 0; k < CA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (const auto& row : result) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
