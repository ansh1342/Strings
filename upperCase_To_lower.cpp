#include<iostream>
using namespace std;
int main(){
    char ch = 'B';
    if(ch >= 'a' && ch <= 'z'){
        cout << ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        cout << temp;
    }
}