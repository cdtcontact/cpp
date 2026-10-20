/***********************************************************************
 * > File Name: 1.namespace.cpp
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 22:27:36 CST
 **********************************************************************/

#include <iostream>
#include "1.test.hpp"
using namespace std;

void MySpace::func1(){
    cout << "void MySpace::func1()" << endl;
}
void MySpace::func2(int x){
    cout << "void MySpace::func2(int x)" << x <<endl;
}
