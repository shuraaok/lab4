#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "����� 1" << endl; // ��� ����� 1�� ����� == ��� ����� 4�� �����

    const int r = 1 + 3;
    int arr[r];
    int a, b;
    int min1 = 10;
    int min2 = 10;

    cout << "������� " << r << " �����:" << endl;
    for (int i = 0; i < r; ++i) {
        cin >> arr[i];
    }
    a = abs(arr[0]);
    while (a > 0) {
        b = a % 10;
        if (b < min1) {
            min1 = b;
        }
        a = a / 10;
    }

    a = abs(arr[r - 1]);
    while (a > 0) {
        b = a % 10;
        if (b < min2) {
            min2 = b;
        }
        a = a / 10;
    }

    if (min1 == min2) {
        for (int f = 0; f < r - 1; ++f) {
            for (int g = f + 1; g < r; ++g) {
                if (arr[f] > arr[g]) {
                    int k = arr[g];
                    arr[g] = arr[f];
                    arr[f] = k;
                }
            }
        }
    }
    for (int i = 0; i < r; ++i) {
        cout << arr[i] << "; ";
    }

    cout << endl;
    cout << "����� 2" << endl;
    cout << "������� 12 �����: " << endl;

    int matr[3][4];
    for (int g = 0; g < 3; ++g) {
        for (int f = 0; f < 4; ++f) {
            cin >> matr[g][f];
        }
    }

    int sum[3];
    for (int i = 0; i < 3; ++i) {
        sum[i] = 0;
    }

    for (int g = 0; g < 3; ++g) {
        for (int f = 0; f < 3; ++f)
            sum[g] = sum[g] + matr[g][f];
    }

    for (int i = 0; i < 3; ++i) {
        sum[i] = abs(sum[i]);
    }

    int min = INT_MAX;
    int min_g;
    for (int i = 0; i < 3; ++i) {
        if (sum[i] < min) {
            min = sum[i];
            min_g = i;
        }
    }

    for (int f = 0; f < 4; ++f) {
        matr[min_g][f] = 0;
    }

    for (int g = 0; g < 3; ++g) {
        for (int f = 0; f < 4; ++f) {
            cout << matr[g][f] << "; ";
        }
    }
}
