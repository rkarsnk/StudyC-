#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "整数値：";
    cin >> n;

    if ( n > 0 )
        cout << "その値は正の整数です。\n";
    else if ( n < 0 )
        cout << "その値は負の整数です。\n";
    else
        cout << "その値は0です。\n";
}