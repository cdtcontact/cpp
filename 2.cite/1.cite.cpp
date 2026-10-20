/***********************************************************************
 * > File Name: 1.cite.cpp
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-19 12:17:18 CST
 * 引用：本质就是一个常量指针
 * 1.&在此不是求地址运算，而是起标识作用
 * 2.类型标识符是指目标变量的类型
 * 3.必须在声明引用变量时进行初始化
 * 4.引用初始化后不能改变（再引用其他）
 * 5.不能有NULL引用，必须确保引用是和一块合法的存储单元关联
 **********************************************************************/

#include <iostream>
using namespace std;

typedef struct Teacher{
    char name[32];
    int age;
} Teacher;
// 引用的本质 是个常量指针
void printfT2(Teacher &t){
    cout << t.age << endl;
    t.age = 18;
}

void printfT1(Teacher * const t){
    cout << t->age << endl;
    t->age = 28;
}

int main(){
    Teacher t ;
    t.age = 23;
    printfT2(t);
    cout << t.age <<endl;
    printfT1(&t);
    cout << t.age << endl;
    return 0;
}














