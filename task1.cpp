#include <iostream>

using namespace std;

int main() {
 int n;
 std::cin >> n;
 int* array = (int*)malloc(n * sizeof(int));
 for (int i = 0; i < n; i++) 
        std::cin >> array[i];
 for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
   if (array[j] > array[j + 1]) {
    int a = array [j];
    array[j] = array[j + 1];
    array[j + 1] = a;
   }
  }
 }
 for (int i = 0; i < n; i++) 
  cout << array[i] << '\t';
 
}
