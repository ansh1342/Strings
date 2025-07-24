#include<iostream>
using namespace std;
// int main(){
//     char name[20];
//     cout << "Enter your name: " << endl;
//     cin >> name;
//     cout << "Your name is: " ;
//     name[2] = '\0';   // \0 is an terminator it terminate the string.
//     cout << name;
    
// }

void chara(char arr[] , int n){
    cout << "Enter character ";
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }

}

void printArray(char arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout << arr[i];

    }
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    cin.ignore();
    char arr[n];
    chara(arr,n);
    printArray(arr,n);
}