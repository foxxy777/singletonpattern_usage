#pragma once

#include <iostream>
using namespace std;

class singleton {
private:
    singleton() {
        cout << "test" << endl;
    };
    static singleton* ptr;// = NULL;//需要在cpp里面声明这个ptr = NULL;不然会报错，并且不能在头文件这里声明
public:
    static singleton* get() {
        if (ptr == NULL) {
            ptr = new singleton();
            return ptr;
        }
        else
            return ptr;
    };
    void func();
};
