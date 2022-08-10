#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "整数値：";
    cin >> n;

    if ( n == 0 )
        cout << "その値は0です。\n";
    else if ( n >= -9 && n <= 9 )
        cout << "その値は一桁です。\n";
    else
        cout << "その値は二桁以上です。\n";
}