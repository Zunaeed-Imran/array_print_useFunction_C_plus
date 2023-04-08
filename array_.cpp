#include <iostream>
using namespace std;

int arr() {
  int arr[3] [3] = {{50,54,1}, {60,69,66}, {1,9,5}};
    for (int i=0; i<3; i++){
      for (int j=0; j<3; j++){
        cout << arr[i] [j] << " ";
      }
      cout << endl;
    }
}

int main() {
  arr();

  return 0;
}