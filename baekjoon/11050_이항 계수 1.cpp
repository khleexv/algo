#include <iostream>
using namespace std;

int bino(int n, int r) {
    if (r==0 || n==r) return 1;
    return bino(n-1,r-1) + bino(n-1,r);
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    printf("%d", bino(N, K));
}