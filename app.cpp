#include <bits/stdc++.h>
using namespace std;

vector<int> input_vector(int n)
{
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  return a;
}

void solve()
{
  // type your code here for each testcase
  int N, M;
  cin >> N;
  vector<int> a[N + 1];
  for (int i = 0; i < N; i++)
  {
    cin >> M;
    a[i] = input_vector(M);
    for (int i = 0; i < M; i++)
    {
      cout << a[0][i] << endl;
    }
    cout << "End" << endl;
  }
}
int main()
{
  int t;
  t = 1;
  while (t--)
  {
    solve();
  }
}