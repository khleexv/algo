#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(4), b(2);
    for (int i=0;i<4;++i) scanf("%d", &a[i]);
    for (int i=0;i<2;++i) scanf("%d", &b[i]);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    printf("%d", a[1] + a[2] + a[3] + b[1]);
}