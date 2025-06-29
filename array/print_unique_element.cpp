#include <iostream>

using namespace std;

void printDistinctValues(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (i == j) {
            cout << arr[i] << "\t";
        }
    }
}

int main() {
    int arr[] = {1, 5, 7, 12, 1, 6, 10, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Distinct values of the array are:\n";
    printDistinctValues(arr, n);
    return 0;
}
