#include <iostream>
#include <cmath>
#include <array>

using namespace std;
const long long MOD = 998244353;


int main() {

    int i = 10;

    int& j = i;

    i++;

    cout << j; 

    return 0;
}
