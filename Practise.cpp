// #include<iostream>
// using namespace std;
// int getMaxOccurance(string s){
//     int arr[26] = {0};
//     for(int i = 0 ; i<s.length() ; i++){
//         char ch = s[i];
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;

//     }
//     int maxi = -1 ; 
//     int ans = 0;
//     for(int i = 0 ; i<26 ; i++){
//         if(maxi < arr[i]){
//             ans = i;
//             maxi = arr[i];
//         }

//     }
//     return 'a' + ans;

// }

// int main(){
//     string s;
//     cin >> s;
//     cout << (char)getMaxOccurance(s);

// }


#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // string str;
    // getline(cin , str);
    // cout << "You entered " << str << endl;

    // char arr[35];
    // cin.getline(arr,35);
    // cout << "You entered " << arr << endl;

    // char arr[35];
    // cin.getline(arr , 35 , ' ');      // cin.getline(arr , size , delimiter) // delimiter = special character at which cin stops reading.
    // cout << "You entered: " << arr << endl;

    char str1[25];
    char str2[25];
    cin >> str1;
    cin >> str2;
    int result = strcmp(str1,str2);
    cout << result;



}