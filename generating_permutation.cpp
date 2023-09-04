#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

bool nextPermutation(int arr[], int size) {
    int i = size - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }
    if (i < 0) {
        reverse(arr, 0, size - 1);
        return false;
    }
    
    int j = size - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }
    
    swap(arr[i], arr[j]);
    reverse(arr, i + 1, size - 1);
    
    return true;
}

int main() {
    int N;
    cin >> N;
    
    int arr[100];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    bool found = nextPermutation(arr, N);
    
    if (found) {
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No next permutation available." << endl;
    }
    
    return 0;
}
