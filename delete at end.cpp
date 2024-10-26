#include<iostream>
using namespace std;

int main() {
    int arr[10], n, i;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    cout << "Enter array elements:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    n--;
    
    // Output the array after deletion
    cout << "Array after deleting the last element:" << endl;
    for (i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
