//O(N)

#include <iostream>
#include <string>

using namespace std;


int oN(int);
int oNN(int);
int oNN2(int);
int main(){
  
}

//o()
int oN(int y){
  for(int x = 0; x <= y; x++){
        cout << x << endl;
    }
    return 0;
}
//o(n^2)
int oNN(int z){
  for(int x = 0; x <= z; x++){
      for(int y = 0; y < z; y++)
        cout << x << endl;
    }
    return 0;
}

//o(n^2 + 2)
int oNN2(int z){
  for(int x = 0; x <= z; x++){
      for(int y = 0; y < z; y++){
        cout << x << endl;
        cout << y << endl;
      }
    }
    return 0;
}
