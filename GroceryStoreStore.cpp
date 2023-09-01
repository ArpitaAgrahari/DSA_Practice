#include <iostream>
using namespace std;

int isFruitPresent(string arr[], int size, string target) {
    int low = 0, high = size - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int size;
    cin >> size;
    
    string arr[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    string target;
    cin >> target;
    
    int result = isFruitPresent(arr, size, target);
    
    if (result == -1) {
        cout << "\"" << target << "\" is not found in the array." << endl;
    } else {
        cout << "The first occurrence of \"" << target << "\" is at index " << result << "." << endl;
    }
    
    return 0;
}
