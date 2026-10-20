/***********************************************************************
 * > File Name: 3.overload.cpp
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-20 12:28:03 CST
 **********************************************************************/

#include <iostream>
using namespace std;

// 函数重载
/*
 * 函数重载：
 *  在同一个作用域里面：
 *      1.函数名字相同
 *      2.函数参数个数不同
 *      3.函数参数类型不一样
 *      4.函数参数类型顺序不一样
 * */
int func (){
    return 1;
}
int func(int a){
    return a;
}


namespace abc{
    void func(){}
    void func(int a){printf("abc::a = %d\n",a);}
}

namespace edf{
    void func(){}
    void func(int a){printf("edf::a = %d\n",a);}
}

int main(){
    abc::func(999);
    edf::func(222);
    return 0;
}
