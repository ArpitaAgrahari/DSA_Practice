#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int size;
    cin >> size;
    
    int arr[MAX_SIZE];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int position;
    cin >> position;
    
    if (position < 1 || position > size) {
        cout << "Original array: ";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Invalid position!" << endl;
    } else {
        cout << "Original array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        for (int i = position - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        
        cout << "Updated array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
