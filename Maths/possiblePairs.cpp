#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int countPairs(vector<int>& A, int B) {
    int n = A.size();
    vector<int> freq(B);

    for (int i = 0; i < n; i++) {
        freq[A[i] % B]++;
    }

    int ans = 0;
    ans += freq[0] * (freq[0] - 1) / 2; // pairs with sum divisible by B
    for (int i = 1; i < B; i++) {
        int j = B - i; // complement of i
        if (i >= j) {
            break;
        }
        ans += freq[i] * freq[j]; // pairs with sum divisible by B
    }
    if (B % 2 == 0) {
        ans += freq[B/2] * (freq[B/2] - 1) / 2; // pairs with sum divisible by B
    }

    return ans % MOD;
}

int main() {
    int n, B;
    cin >> n >> B;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int ans = countPairs(A, B);
    cout << ans << endl;

    return 0;
}
