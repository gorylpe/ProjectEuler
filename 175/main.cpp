#include <iostream>

using namespace std;

long n;

void f(long a, long b, bool parity, bool first){
    int floor = a / b;
    a %= b;
    if(a == 0){
        a = 1;
        --floor;
    }
    //cout << floor << " + " << 1 << "/ " << b << "/" << a << endl;
    if(a == 1 && parity){
        cout << b;
    } else {
        f(b, a, !parity, false);
    }

    if(!first || floor != 0){
        cout << ",";
        cout << floor;
    }
}

long NWD(long a, long b)
{
    if(b!=0)
        return NWD(b,a%b);

    return a;
}

int main() {
    long p,q;
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> p >> q;
    long nwd = NWD(p, q);
    if(nwd != 1){
        p /= nwd;
        q /= nwd;
    }
    f(q, p, false, true);
    return 0;
}