#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[3];
    while (true) {
        scanf("%d%d%d", &a[0], &a[1], &a[2]);
        if (a[0] == 0 && a[1] == 0 && a[2] == 0) break;
        sort(a, a+3);
        if (a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) puts("right");
        else puts("wrong");
    }
}