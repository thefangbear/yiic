
#include "yii.h"

类定义 结构体 单向链表定义 开始
    数字 值 行末
    结构体 单向链表定义 指针 下一个 行末
结束 单向链表 行末

类定义 结构体 双向链表定义 开始
    数字 值一 行末
    数字 值二 行末
    结构体 双向链表定义 指针 下一个 行末
    结构体 双向链表定义 指针 上一个 行末
结束 双向链表 行末

空值
初始化单向链表 左起
    数字 指针 链表数组 ,
    数字 数组大小
    右放
开始
    单向链表 指针 链表 赋值 ( 单向链表 指针 ) 马洛个 ( 物体大小 ( 单向链表 ) ) 行末
    数字 循环控制 赋值 零 行末
    循环 ( 循环控制 小于 数组大小 ) 做
        链表->值 赋值 链表数组[ 循环控制 ] 行末
        链表->下一个 赋值 ( 单向链表 指针 ) 马洛个 ( 物体大小 ( 单向链表 ) ) 行末
        循环控制 加一 行末
        完成
    链表->下一个 赋值 NULL 行末 // 终结链表
    返回 行末
结束

空值
显示数字 左起
    数字 被显示的数字
    右放
开始
    如果 ( 被显示的数字 等于 零 ) 就
        命令行显示 ( "输出：字符 0 或 零\n" ) 行末
    好了
    还是不行 ( 被显示的数字 等于 一 ) 就
    	命令行显示 ( "输出：字符 1 或 一\n" ) 行末
    好了
    还是不行 ( 被显示的数字 等于 二 ) 就
    	命令行显示 ( "输出：字符 2 或 二\n" ) 行末
    好了
    还是不行 ( 被显示的数字 等于 三 ) 就
    	命令行显示 ( "输出：字符 3 或 三\n" ) 行末
    好了
    还是不行 ( 被显示的数字 等于 四 ) 就
    	命令行显示 ( "输出：字符 4 或 四\n" ) 行末
    好了
    还是不行 ( 被显示的数字 等于 五 ) 就
    	命令行显示 ( "输出：字符 5 或 五\n" ) 行末
    好了
    实在不行 就
	空值 指针 零指针 赋值 马洛个 ( 零 ) 行末
	命令行显示 ( "输出：实在不行，马洛个零\n" ) 行末
    好了
    返回 行末
结束

数字
主程序 左起
        空值
        右放
开始

    命令行显示 ("你好, 世界！！\n") 行末
    数字 指针 测试数组
            赋值 ( 数字 指针 ) 马洛个 ( 物体大小 ( 数字 ) 乘 三 ) 行末
    数字 循环控制 赋值 零;
    循环 ( 循环控制 小于 三 ) 做
        测试数组 [ 循环控制 ] 赋值 三 行末
        循环控制 赋值 循环控制 加 一 行末
        完成
    循环 ( 循环控制 大于 零 ) 做
        命令行显示 ( "%d\n", 测试数组[ 循环控制 减 一 ] ) 行末
        循环控制  行末
        循环控制 减一 行末
        完成
    扔掉 ( 测试数组 ) 行末

    // ==== 显示数字 ==== //

    显示数字 ( 一 ) 行末
    显示数字 ( 二 ) 行末
    显示数字 ( 三 ) 行末
    显示数字 ( 四 ) 行末
    显示数字 ( 一 乘 千 ) 行末
    返回 零 行末

结束
