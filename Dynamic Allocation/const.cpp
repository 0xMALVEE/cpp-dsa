#include <iostream>

using namespace std;

int fact(int n){
  int smallOutput = fact(n -1);

  return smallOutput * n;
}

int main (){
  const int i =0;

  cout << fact(10) << endl;
}