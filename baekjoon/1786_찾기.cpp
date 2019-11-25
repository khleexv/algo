#include <bits/stdc++.h>
using namespace std;

vector<int> getPartialMatch(const string& s) {
    int n = s.size();
    vector<int> pi(n);
    int begin = 1, matched = 0;
    while (begin + matched < n) {
        if (s[matched] == s[begin+matched]) {
            matched++;
            pi[begin+matched-1] = matched;
        }
        else {
            if (matched == 0) begin++;
            else {
                begin += matched - pi[matched-1];
                matched = pi[matched-1];
            }
        }
    }
    return pi;
}

vector<int> kmpSearch(const string& H, const string& N) {
    int n = H.size(), m = N.size();
    vector<int> ret;
    vector<int> pi = getPartialMatch(N);
    int begin = 0, matched = 0;
    while (begin <= n - m) {
        if (matched < m && H[begin+matched] == N[matched]) {
            matched++;
            if (matched == m) ret.push_back(begin);
        }
        else {
            if (matched == 0) begin++;
            else {
                begin += matched - pi[matched-1];
                matched = pi[matched-1];
            }
        }
    }
    return ret;
}

int main() {
    string T, P;
    getline(cin, T);
    getline(cin, P);
    vector<int> ans = kmpSearch(T, P);
    printf("%d\n", ans.size());
    for (int x : ans) printf("%d ", x+1);
}