/***********************************************************************
 * > File Name: main.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 22:40:40 CST
 **********************************************************************/

#include <stdio.h>
#include "1.namespace.cpp"
// using namespace MySpace;

// 命名空间年的别名
namespace veryLongName{
    
}

int main(){
    namespace shortname = veryLongName;
    MySpace::func1();
    MySpace::func2(23);
    return 0;
}
