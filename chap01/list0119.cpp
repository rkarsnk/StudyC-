#include <string>
#include <iostream>

using namespace std;

int main(){
    string name;

    cout << "お名前は:";
    getline(cin, name);

    cout << "おはようございます、"<< name << "さん。\n";
}
