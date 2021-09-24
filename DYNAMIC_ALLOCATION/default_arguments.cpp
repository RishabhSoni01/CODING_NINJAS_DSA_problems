#include<iostream>
using namespace std;

int getValue(int x = 0, int y = 0, int z){  
    return (x + y + z); 
}

int main(){
   cout << getValue(10);
   return 0;
}
//output>>Compilation error due to Default parameters must be added last in C++ functions.