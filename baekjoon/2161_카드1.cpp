#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    scanf("%d", &N);
    queue<int> q;
    for (int i=1;i<=N;++i) q.push(i);
    while (q.size() > 1) {
        printf("%d ", q.front()); q.pop();
        q.push(q.front()); q.pop();
    }
    printf("%d", q.front());
}