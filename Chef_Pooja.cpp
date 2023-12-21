#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;

int main() {
    int n, m;
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArr[MAX_SIZE];
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
            cin >> arr1[i];
    }
    
    cin >> m;
    for (int i = 0; i < m; ++i) {
            cin >> arr2[i];
    }
    
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
            if (arr1[i] <= arr2[j]) {
                        mergedArr[k++] = arr1[i++];
            } else {
                        mergedArr[k++] = arr2[j++];
            }
    }
    
    while (i < n) {
            mergedArr[k++] = arr1[i++];
    }
    
    while (j < m) {
            mergedArr[k++] = arr2[j++];
    }
    
    cout << mergedArr[0] << endl;
    
    return 0;
}
