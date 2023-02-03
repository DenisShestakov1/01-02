#include <iostream>

using namespace std;

int main(){
    int longitude;
    cin >> longitude;
   int** array = (int**)malloc(longitude * (sizeof(int)));
    for (int i = 0; i < longitude; i++) {
        array[i] = (int*)malloc(longitude * (sizeof(int)));
        for (int j = 0; j < longitude; j++) {
           array[i][j]=rand()%10;
            cout << array[i][j] << '\t'; 
        }
      cout << '\n';
        free(array[i]);
    }
}
