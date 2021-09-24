#include <iostream>
using namespace std;

int length(char input[]) { 
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) { 
        len++; 
    }
    return len;
} 
bool ischeckPalindromeRecursive(char input[],int start, int end)
{
    if(start==end){
        return true;
    }
    if(input[start]!=input[end]){
        return false;
    }
    if(start<end+1){
        return ischeckPalindromeRecursive(input,start+1,end-1);
    }
    return true;
    
} 
bool checkPalindrome(char input[]) {
   int n=length(input);
    if (n==0)
        return true;
     
    return ischeckPalindromeRecursive(input, 0,n-1);
}
int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
