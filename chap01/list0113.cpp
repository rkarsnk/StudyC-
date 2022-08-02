#include <iostream>

using namespace std;

int main(){
    double x;
    double y;

    cout << "xとyを加減乗除します。\n";

    cout << "xの値:";
    cin >> x;

    cout << "yの値:";
    cin >> y;

    cout << "x + y = " << x + y << "\n";
    cout << "x - y = " << x - y << "\n";
    cout << "x * y = " << x * y << "\n";
    cout << "x / y = " << x / y << "\n";
// 以下はコンパイルエラーとなる。
//   cout << "x % y = " << x % y << "\n";
}
