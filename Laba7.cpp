#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "kilk_elem_mas: ";
    cin >> n;
    int* array = new int[n];
    cout << "elementi_mas: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    bool symmetric = true;
    for (int i = 0; i < n / 2; i++) {
        if (array[i] != array[n - i - 1]) {
            symmetric = false;
            break;
        }
    }
    if (symmetric) {
        cout << "Simetrichne" << '\n';
    }
    else {
        cout << "Ne_Simetrichne" << '\n';
    }
    delete[] array;
}
