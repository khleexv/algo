#include <iostream>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int a = n / 2;
    int b = n - a;
    printf("%d", (a+1) * (b+1));
}