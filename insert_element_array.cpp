#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int size;
    cin >> size;
    
    int arr[MAX_SIZE];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int position, value;
    cin >> position >> value;
    
    if (position < 1 || position > size + 1) {
        cout << "Original array: ";
        for(int i = 0; i<size; i++){
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
        
        for (int i = size; i > position - 1; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = value;
        
        cout << "Updated array: ";
        for (int i = 0; i < size + 1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
