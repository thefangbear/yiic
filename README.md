# ![yiic](https://github.com/thefangbear/yiic/raw/master/yiic.png)
# yiic - C in Chinese

An cultured flavor of C.

## yiic - 易C
用中文写的 C 语言

## Compatibility issues
Currently `gcc` does not support Unicode characters as macro names, even with `-fextended-macros`. However `clang` does support the Chinese character set. Therefore to use yiic an apple `clang` compiler is needed.

## 使用
于任意项目中引用头文件 `yii.h`.

