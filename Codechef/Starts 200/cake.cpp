#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y;
    cin >>n>>x>>y;

    int a = y / x;
    int vehicles = (n + a - 1) / a;

    cout<<vehicles<<endl;
    return 0;
}
