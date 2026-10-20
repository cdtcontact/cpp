/***********************************************************************
 * > File Name: main.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-20 11:51:06 CST
 *
 *  内联函数注意事项：
 *      1.存在任何形式的循环语句，可能用不了
 *      2.存在过多的条件判断语句，可能用不了
 *      3.函数体过于庞大，可能用不了
 *      4.对函数进行取地址操作，可能用不了
 **********************************************************************/

#include <iostream>
using namespace std;
// extern int func(int x,int y); // extern 关键字可以声明函数
// 内联函数在哪个文件里面使用就要在该文件里面声明定义
inline int func(int x,int y){
    return x * y;
}

// 函数默认值:参数可以给一个默认值
int test(int a = 10,int b =30){
    return a + b;
}

int main(){
    int ret;
    ret = func(10,20);
    cout << "ret = " << ret << endl;
    
    cout <<"test() = "<< test() << endl;
    cout <<"test(33,55) = " << test(33,55) << endl;
    return 0;
}
