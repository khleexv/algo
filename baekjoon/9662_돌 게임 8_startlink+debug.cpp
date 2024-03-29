#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

const int MAXK = 22;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> moves(m);
    for (int i=0; i<m; i++) {
        cin >> moves[i];
    }
    int mask= (1<<MAXK)-1;
    int ans = -1;
    map<int,int> last;
    vector<int> r;
    for (int i=0; i<=n; i++) {
        mask <<= 1;
        ans += 1;
        for (int j : moves) {
            if ((mask & (1 << j)) == 0) {
                mask += 1;
                ans -= 1;
                break;
            }
        }
        mask &= (1 << MAXK) - 1;
        if (last.count(mask)) {
            // cout << "from " << i << " " << ans << '\n';
            int pLength = i - last[mask];
            int cnt = (n-i)/pLength;
            i += cnt*pLength;
            ans += cnt*(ans-r[last[mask]]);
            // cout << "pLength: " << pLength << " cnt: " << cnt << '\n';
            // cout << "to   " << i << " " << ans << '\n';
        }
        last[mask] = i;
        r.push_back(ans);
    }
    cout << ans << '\n';
    return 0;
}
