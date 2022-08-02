#include <ctime>                //C言語のtime.hと同じ
#include <cstdlib>              //C言語のstdlib.hと同じ
#include <iostream>

using namespace std;

int main(){
    srand(time(NULL));          //現在の時刻を乱数の種に使用

    int lucky = rand() % 10;    //0～9の乱数

    cout << "今日のラッキーナンバは" << lucky <<"です。\n";
}
