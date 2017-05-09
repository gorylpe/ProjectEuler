#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        long n;
        cin >> n;
        long result = n*(n+1)*(3*n*n-n-2)/12;
        cout << result << endl;
    }
    return 0;
}
