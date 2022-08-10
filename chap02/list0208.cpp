#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "整数値：";
    cin >> n;

    if ( n <= -10 || n >= 10 )
        cout << "その値は二桁以上です。\n";
    else
        cout << "その値は二桁未満です。\n";
}