#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}
// void reverse(char name[]){
//     for(int j = getlength(name)-1 ; j>=0 ; j--){
//         cout << name[j];
//     }


// }

void reverse(char name[] , int n){
    int s = 0;
    int e = n - 1;

    while(s<e){
        swap(name[s] , name[e]);
        s++;
        e--;
    }
}


int main(){
    char name[20];
    cout << "Enter name: " << endl;
    cin >> name;
    cout << "Your name is: ";
    cout << name;
    cout << endl;
    reverse(name,getlength(name));
    cout << "Reverse string is: ";
    cout << name;

}