#include <iostream>
using namespace std;

int countZeros(int n) {
    int ans;
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0;
    }
    ans=countZeros(n/10)+countZeros(n%10);
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}