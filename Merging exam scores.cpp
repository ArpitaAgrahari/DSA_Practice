#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int n, m;
    cin >> n;
    
    int mathScores[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
            cin >> mathScores[i];
    }
    
    cin >> m;
    
    int scienceScores[MAX_SIZE];
    for (int i = 0; i < m; ++i) {
            cin >> scienceScores[i];
    }
    
    int maxScore = -1;
    for (int i = 0; i < n; ++i) {
            if (mathScores[i] > maxScore) {
                        maxScore = mathScores[i];
            }
    }
    
    for (int i = 0; i < m; ++i) {
            if (scienceScores[i] > maxScore) {
                        maxScore = scienceScores[i];
            }
    }
    
    cout << maxScore << endl;
    
    return 0;
}
