#include <iostream>
#include <queue>
using namespace std;
int a[1001][1001];
bool use[1001][1001];
int lvl[1001][1001];
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
int main() {
        int n, m;
        cin >> n >> m;
        queue<pair<int, int> > que;
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        cin >> a[i][j];
                        if (a[i][j] == 2) {
                                que.push(make_pair(i, j));
                                use[i][j] = 1;
                        }
                        else if (a[i][j] == 0)
                                use[i][j] = 1;
                }
        }
        int ans = 0;
        while (!que.empty()) {
                pair<int, int> v = que.front();
                ans = max(ans, lvl[v.first][v.second]);
                que.pop();
                for (int i = 0; i < 4; i++) {
                        int toX = v.first + dx[i];
                        int toY = v.second + dy[i];
                        if (toX >= 1 && toX <= n && toY >= 1 && toY <= m && !use[toX][toY]) {
                                use[toX][toY] = 1;
                                lvl[toX][toY] = lvl[v.first][v.second] + 1;
                                que.push(make_pair(toX, toY));
                        }
                }
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        if (!use[i][j]) {
                                cout << -1;
                                return 0;
                        }
                }
        }
        cout << ans ;
        return 0;
}