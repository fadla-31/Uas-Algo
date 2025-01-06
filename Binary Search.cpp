#include <iostream>
#include <algorithm> // Untuk fungsi sort()
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid; // Mengembalikan indeks elemen yang ditemukan
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Elemen tidak ditemukan
}

int main() {
    int arr[] = {5, 3, 8, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    // Data harus diurutkan terlebih dahulu
    sort(arr, arr + n);

    int result = binarySearch(arr, n, target);
    if (result != -1)
        cout << "Elemen ditemukan di indeks: " << result << endl;
    else
        cout << "Elemen tidak ditemukan." << endl;

    return 0;
}
