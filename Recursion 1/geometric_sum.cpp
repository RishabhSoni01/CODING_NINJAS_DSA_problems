#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k) {
    double ans;
    if(k==0){
        return 1;
    }
    ans=geometricSum(k-1)+double(1/pow(2,k));
	return ans;
}
int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}