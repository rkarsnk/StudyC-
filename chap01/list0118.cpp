#include <string>              //文字列を扱うヘッダライブラリ
#include <iostream>

using namespace std;

int main(){
    string name;

    cout << "お名前は:";
    cin >> name;

    cout << "おはようございます、"<< name << "さん。\n";
}
