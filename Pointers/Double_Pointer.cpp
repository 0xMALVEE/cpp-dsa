#include <iostream>
#include <cmath>
#include <array>

using namespace std;
const long long MOD = 998244353;


int main() {

    int i = 10;

    int* p = &i;

    int** dp = &p;

    cout << p << endl;
    cout << dp << endl;

    cout << ** dp;

    return 0;
}
