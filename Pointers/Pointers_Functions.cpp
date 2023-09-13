#include <iostream>
#include <cmath>
#include <array>

using namespace std;
const long long MOD = 998244353;

void inc(int* a ){
    (*a)++;
}

void sum(int * a,int size){
    int ans = 0;
    for(int i =0;i < size;i ++){
        ans += a[i];
    }
    cout << ans << endl;
}

int main() {

    // VAR
//    int a = 1;

//    cout << a << endl;

//    inc(&a);
//    cout << a << endl;

    // ARR
    int arr[10] = { 1,1,1,1,1,1,1,1,1,1};

    sum(arr + 1, 10 -1);

    return 0;
}
