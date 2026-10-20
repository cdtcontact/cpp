/***********************************************************************
 * > File Name: 2.inline_function.cpp
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-19 12:40:14 CST
 *
 *  内联函数：
 *      1.inline不保证函数一定内联展开。
 *      2.函数存在循环、复杂条件判断时，编译器可能选择不内联。
 *      3.函数体过大可能导致代码膨胀，因此不一定适合内联。
 *      4.获取函数地址不禁止内联，但可能需要保留可供调用的函数实现。
 *      5.是否内联由编译器根据优化策略、调用位置等因素决定。
 *      6.C和C++的inline定义与链接队则存在区别，不能混为一谈。
 *
 **********************************************************************/

#include <iostream>
using namespace std;


//  内联函数要求：声明和定义要同时进行。
inline int func(int x,int y){
    return x + y;
}
int main(){
    int res = func(2,3);
    printf("res = %d\n",res);
    return 0;
}
