#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        long n;
        cin >> n;
        long n3 = (n-1)/3;
        long n5 = (n-1)/5;
        long n15 = (n-1)/15;
        long result = 3*(n3 + 1)*n3/2 + 5*(n5 + 1)*n5/2 - 15*(n15 + 1)*n15/2;
        cout << result << endl;
    }
    return 0;
}