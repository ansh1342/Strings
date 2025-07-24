#include<iostream>
using namespace std;

int getlength(char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        count ++;
    }
    return count;
}

int palindrome(char str[] , int n){
    int s = 0;
    int e = n - 1;
    while(s<=e){
        if (str[s] != str[e]){
        return false;
        }
        else{
            s++;
            e--;
        }
    return true;

    }
    
    
}

int main(){
    char str[20];
    cout << "Enter string: ";
    cin >> str;
    int len = getlength(str);
    cout << palindrome(str,len);

}