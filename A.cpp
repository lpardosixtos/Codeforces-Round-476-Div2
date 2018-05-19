#include <bits/stdc++.h>

using namespace std;

int main(void){

    long long int k, n, s, p;
    cin >> k >> n >> s >> p;
    long long int sheetsPerson=(n+s-1)/s;
    long long int sheets=sheetsPerson*k;
    long long int ans=(sheets+p-1)/p;
    cout << ans << "\n";




    return 0;
}
