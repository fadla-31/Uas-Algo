#include <iostream>
using namespace std;

void merge(int low, int mid, int up);
void mergeSort(int low, int up);
int a[50];

int main()
{
	cout << "Fadla Hadida" <<endl;
	cout << "231011402733" <<endl;
    int jumlahBil;
    cout << "Masukkan Jumlah element Array" << endl;
    cin >> jumlahBil;
    for (int i = 0; i < jumlahBil; i++)
    {
        cout << "Bilangan ke-" << i + 1 << endl;
        cin >> a[i];
    }
    mergeSort(1, jumlahBil);
    for (int i = 1; i <= jumlahBil; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

void merge(int low, int mid, int up)
{
    int h, i, j, k;
    int b[50];
    h = low;
    i = low;
    j = mid + 1;

    while ((h <= mid) && (j <= up))
    {
        if (a[h] < a[j])
        {
            b[i] = a[h];
            h++;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if (h > mid)
    {
        for (k = j; k <= up; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    else
    {
        for (k = h; k <= mid; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    for (k = low; k <= up; k++)
        a[k] = b[k];
}

void mergeSort(int low, int up)
{
    int mid;
    if (low < up)
    {
        mid = (low + up) / 2;
        mergeSort(low, mid);
        mergeSort(mid + 1, up);
        merge(low, mid, up);
    }
}
