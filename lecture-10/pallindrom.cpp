#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    char arr[n] ;
    cin >> arr;
    for(int i = 0;i<n; i++){
        cout << arr[i] << endl;
    }
    bool check = 1;
    for(int i = 0;i<n; i++){
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check == true){
        cout << "word is  pallidrom word" << endl;
    }else{
        cout << "word is not  pallidrom word" << endl;
    }
    return 0;
}