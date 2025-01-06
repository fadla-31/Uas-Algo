#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Mengembalikan indeks elemen yang ditemukan
        }
    }
    return -1; // Elemen tidak ditemukan
}

int main() {
    int arr[] = {5, 3, 8, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = linearSearch(arr, n, target);
    if (result != -1)
        cout << "Elemen ditemukan di indeks: " << result << endl;
    else
        cout << "Elemen tidak ditemukan." << endl;

    return 0;
}
