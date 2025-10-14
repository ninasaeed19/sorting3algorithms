#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, val;

    cout << "Enter number of elements (max 100): ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position to insert (0 to " << n << "): ";
    cin >> pos;

    cout << "Enter the value to insert: ";
    cin >> val;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++; 

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
