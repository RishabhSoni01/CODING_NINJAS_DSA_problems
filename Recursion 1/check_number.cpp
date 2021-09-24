#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
 	int rec;
 
 
    if (size >= 0) {
        if (input[size] == x)
            return true;
        else
            rec = checkNumber(input, --size, x);
    }
    else
        return false;
 
    return rec;
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}