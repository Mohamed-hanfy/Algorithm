#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& array, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; ++i)
        left[i] = array[l + i];
    for (int j = 0; j < n2; ++j)
        right[j] = array[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            array[k] = left[i];
            ++i;
        } else {
            array[k] = right[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        array[k] = left[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        array[k] = right[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<int>& array, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}

int main() {
    vector<int> array = {12, 11, 13, 5, 6, 7};
    int n = array.size();

    cout << "Given array is:\n";
    for (int i = 0; i < n; ++i)
        cout << array[i] << " ";
    cout << endl;

    mergeSort(array, 0, n - 1);

    cout << "Sorted array is:\n";
    for (int i = 0; i < n; ++i)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}
