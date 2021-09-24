#include <iostream>
using namespace std;
int multiplyNumbers(int m, int n) {
    int ans;
    if(n==0){
        return 0;
    }
    ans=multiplyNumbers(m,n-1)+m;
    return ans;
}
int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}