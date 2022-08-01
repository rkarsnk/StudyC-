# 第1章 画面への出力とキーボードからの入力
## 1.1 C++の歴史
Dr.Bjarne Stroustrupが開発した言語。C言語+Simula67。

## 1.2 まずは画面に表示
### list 1-1
#### ソースコード
```
#include <iostream>

using namespace std;

int main(){
    cout << "初めてのC++プログラム。\n";
    cout << "画面に出力しています。\n";
}
```

#### ヘッダインクルード 
`#include` で始まる文。
```
#include <iostream>
```
入出力に関する`<iostream>`や文字列に関する`<string>`などのヘッダが提供されている。
この記述を削除すると、コンパイルに失敗する。

#### 名前空間
`using`で始まる。以下の例では、標準ライブラリの名前空間stdを指定している。
```
using namespace std;
```
標準ライブラリの利用に必要な決まり文句。省略する場合、`cout`の記述を`std::cout`とする必要がある。

---
### list 1-2
#### ソースコード
```
#include <iostream>

using namespace std;

int main(){
    cout << "初めてのC++プログラム。\n画面に出力しています。\n";
}
```

#### 標準出力の書き方
```
    cout << "初めてのC++プログラム。\n";
    cout << "画面に出力しています。\n";
```

```
    cout << "初めてのC++プログラム。\n画面に出力しています。\n";
```
2行の出力を1行で記述することも可能。

---
### list 1-3
#### ソースコード
```
#include <iostream>

using namespace std;

int main(){
    cout << "\aはじめまして。" << "こんにちは。\n";
}
```
#### ストリームへの連続した出力
挿入子`<<`を連続して利用することが可能。
例では、`\a`で警報出力後に「はじめまして。こんにちは。」が出力される。

### list 1-4
#### ソースコード
```
#include <iostream>

using namespace std;

int main(
){
    cout << "初めてのC++プログラム。\n";  cout
    << "画面に出力しています。\n"
    ;
}
```

#### 自由記述形式
ソースコードが見づらくなるので、原則禁止。

## 1.3 変数
