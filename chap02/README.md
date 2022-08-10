# 第2章 プログラムの流れの分岐
## if文
### if文
if文の書き方は以下のとおり
```
if (条件)
    文
```
条件が成立した真(true)となった時、`文`を実行する。

```
if (条件)
    文1
else
    文2
```
条件が成立した真(true)となった時、`文1`を実行する。偽(false)だった場合は`文2`を実行する。

### 条件で多用される演算子

|関係演算子 |説明|
|-      |-   |
|x < y  |xがyより小さければtrue,そうでなければfalseを生成|
|x > y  |xがyより大きければtrue,そうでなければfalseを生成|
|x <= y |xがy以下ならtrue、そうでければfalseを生成|
|x >= y |xがy以上ならtrue、そうでければfalseを生成|

|等価演算子 |説明|
|-      |-   |
|x == y  |xがyと等しければtrue,そうでなければfalseを生成|
|x != y  |xがyと等しくなければtrue,そうでなければfalseを生成|

|論理否定演算子 |説明|
|-      |-   |
|!x  |xがfalseであれば反転してtrue、xがtrueなら反転してfalseを生成|

0はfalseとみなされて、0以外の数値はtrueとみなされる。
```
if (!n)
    文1
else
    文2
```
したがって、上記のようなif文の場合、`n`が`0`(`false`)の時は条件が反転して`true`となり`文1`が実行され、`n`が`0`でない時は`文2`が実行される。

### 入れ子となったif文
```
if (条件1) 
    文1
else if (条件2)
    文2
```
の構造は、
```
if (条件1) 
    文1
else
    文2'
```
で、文2'が
```
if (条件2)
    文2
```
という入れ子構造。

### 論理演算子
#### 論理積
|x      |y      |x && y     |
|-      |-      |---        |
|true   |true   |**true**   |
|true   |false  |false      |
|false  |true   |false      |
|false  |false  |false      |

#### 論理和
|x      |y      |x \|\| y     |
|-      |-      |---        |
|true   |true   |**true**   |
|true   |false  |**true**   |
|false  |true   |**true**   |
|false  |false  |false      |

### 条件演算子
