#include <iostream>
#include <map>
using namespace std;
map<int,int> coords;
bool isDominated(int x, int y) {
    map<int,int>::iterator it = coords.lower_bound(x);
    if (it == coords.end()) return false;
    return y < it->second;
}
void removeDominated(int x, int y) {
    map<int,int>::iterator it = coords.lower_bound(x);
    if(it == coords.begin()) return;
    --it;
    while (true) {
        if (it->second > y) break;
        if (it == coords.begin()) {
            coords.erase(it);
            break;
        }
        else {
            map<int,int>::iterator jt = it;
            --jt;
            coords.erase(it);
            it = jt;
        }
    }
}
int registered(int x, int y) {
    if (isDominated(x, y)) return coords.size();
    removeDominated(x, y);
    coords[x] = y;
    return coords.size();
}
int main() {
    int C;
    scanf("%d", &C);
    while (C--) {
        coords.clear();
        int N, x, y, answer = 0;
        scanf("%d", &N);
        while(N--) {
            scanf("%d%d", &x, &y);
            answer += registered(x, y);
        }
        printf("%d\n", answer);
    }
}