#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll LLINF = 10000000000;
// ulimit -s unlimited

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.precision(17);
  auto start = chrono::high_resolution_clock::now();

  int T;
  cin >> T;

  for (auto t = 1; t <= T; ++t)
  {
    int n;
    cin >> n;

    ll result = 0ll;
    cout << "Case #" << t << ": " << result << endl;
  }
  auto end = chrono::high_resolution_clock::now();
  auto elapsed = chrono::duration_cast<chrono::milliseconds>(end - start);
  cerr << " elapsed " << elapsed.count() << " milliseconds \n";
}