#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        cout << "Iteration " << i + 1 << ": ";
        printArray(arr, n);
        
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int scores[100];
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
    
    cout << "Original array: "<<endl;
    printArray(scores, n);
    
    bubbleSort(scores, n);
    
    cout << "Sorted array: ";
    printArray(scores, n);
    
    return 0;
}
