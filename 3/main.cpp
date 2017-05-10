#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        long n;
        cin >> n;
        long sqrtn = (long)sqrt((double)n);
        for(int j = 2; j <= sqrtn; ++j){
            if(n / j != 1){
                while(n % j == 0 && n / j != 1){
                    n /= j;
                }
            }
        }
        cout << n << endl;
    }
    return 0;
}
