#include <iostream>
using namespace std;
int main() {
    int j,k,star,space;
    do {
        cout << "請問你的腰長要多少?" << "\n";
        cin >> k;
    } while (k > 8 || k <= 0);
    k *= 2;
    for (j = 0;j <= k;j += 2) {
        for (space = k;space > j;space--) {
            cout << " ";
        }
        
        for (star = 1;star <= j;++star) {
            if (star - 1 == j / 2) {
                cout << "      *";
            } else {
                cout << " *";
            }
            
        }
        cout << "\n";
    }
}
