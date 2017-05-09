#include <cmath>
#include <iostream>
using namespace std;


int main() {

    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        long n;
        cin >> n;
        long fib0 = 1;
        long fib1 = 1;
        long fib2 = fib0 + fib1;
        long sum = 0;
        int add = 0;
        while(fib2 <= n){
            //cout << fib2 << " " << add << endl;
            if(add == 0)
                sum += fib2;
            ++add;
            if(add > 2)
                add = 0;
            fib0 = fib1;
            fib1 = fib2;
            fib2 = fib0 + fib1;
        }
        cout << sum << endl;
    }
    return 0;
}
