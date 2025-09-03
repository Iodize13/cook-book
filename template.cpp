#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <cstdint>
#include <ctime>
#include <cassert>
#include <string>
#include <cstring>
#include <bitset>
#include <array>
#include <cmath>

using namespace std;
#define fi first
#define se second
#define int long long
#define ll long long
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(int i = a; i < (b); ++i)

#ifdef LOCAL
#define dbg(...) {cerr << "LINE " << __LINE__ << " -> " << #__VA_ARGS__ << ": " << __VA_ARGS__ << endl;}
#else
#define dbg(...) 42
#endif

typedef vector<int> vi;
typedef pair<int, int> pii;

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx2")
// #pragma GCC optimize("O3,unroll-loops")

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

void sol();

int32_t main(int32_t argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    srand(atoi(argv[1]));
    sol();
}

void sol() {
}
