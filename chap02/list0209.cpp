#include <iostream>

using namespace std;

int main(){
    int month;

    cout << "季節を求めます。\n何月ですか:";
    cin >> month;

    cout << "---- list 2-9 -----\n";
    if ( month >= 3 && month <= 5 )
        cout << "春です。\n";
    else if ( month >= 6 && month <= 8 )
        cout << "夏です。\n";
    else if ( month >= 9 && month <= 11)
        cout << "秋です。\n";
    else if ( month ==12 || month == 1 || month ==2 )
        cout << "冬です。\n";
    else
        cout << "\aそんな月はありません。\n";

    cout << "---- list 2-9a ----\n";
    if ( month < 1 || month > 12 )
        cout << "\aそんな月はありません。\n";
    else if ( month <= 2 || month == 12 )
        cout << "冬です。\n";
    else if ( month <= 5)
        cout << "春です。\n";
    else if ( month <= 8)
        cout << "夏です。\n";
    else
        cout << "秋です。\n";

}