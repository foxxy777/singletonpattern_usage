#pragma once

#include <iostream>
using namespace std;

class singleton {
private:
    singleton() {
        cout << "test" << endl;
    };
    static singleton* ptr;// = NULL;//��Ҫ��cpp�����������ptr = NULL;��Ȼ�ᱨ�����Ҳ�����ͷ�ļ���������
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
