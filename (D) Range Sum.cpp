1.// Problem name: (D) Range Sum.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 19/5/25

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R;

        if (L > R) swap(L, R); 

  long long N = R - L + 1;
  cout << N * (L + R) / 2LL << "\n";
}
 return 0;
}
