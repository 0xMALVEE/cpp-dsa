#include <iostream>

using namespace std;

int fact(int n){
  if(n == 0){
    return 1;
  }
  int smallOutput = fact(n -1);

  return smallOutput * n;
}

int main (){
  const int i =0;

  cout << fact(4) << endl;
}