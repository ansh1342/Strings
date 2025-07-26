#include<iostream>
using namespace std;

int getlength(string str){
    int count = 0;
    for(int i = 0 ; i<str.length() ; i++){
        count++;
    }
    return count;
}

string removespace(string str , int n){
    string temp = "";
    for(int i = 0 ; i < n ; i++){
        if (str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

             
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}


int main(){
    string str;
    getline(cin , str);
    cout << "Original string is: " << str << endl;
    cout << removespace(str,getlength(str));

}