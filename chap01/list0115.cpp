#include <iostream>

using namespace std;

int main(){
    const double PI = 3.1416;       //定値オブジェクト
    double r;

    cout << "半径:";
    cin >> r;

    cout << "円周は" << 2 * PI * r << "です。\n";
    cout << "面積は" << PI * r * r << "です。\n";
}
