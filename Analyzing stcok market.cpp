#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    
    double closingPrices[size];
    for (int i = 0; i < size; i++) {
        cin >> closingPrices[i];
    }
    
    cout << "Updated Array with Positive Closing Prices: ";
    for (int i = 0; i < size; i++) {
        if (closingPrices[i] > 0) {
            cout << closingPrices[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
