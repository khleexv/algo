#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    while (scanf("%d", &n) != EOF) {
        vector<int> lis = {0};
        while (n--) {
            scanf("%d", &x);
            if (x > lis.back()) lis.push_back(x);
            else {
                auto it = lower_bound(lis.begin(), lis.end(), x);
                *it = x;
            }
        }
        printf("%d\n", lis.size()-1);
    }
}