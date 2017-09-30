//
//  LinkStack.h
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#ifndef LinkStack_h
#define LinkStack_h

#include <iostream>
#include "Node.h"
using namespace std;

// 链接存储结构: LinkStack
template <typename T>
class LinkStack {
    Node<T> *ttt;
public:
    LinkStack();    // 构造函数
    ~LinkStack();   // 析构函数
    void push(T x); // 入栈
    T pop();        // 出栈
    bool empty();   // 判断栈是否为空
    int size();     // 栈大小
    T top();        // 获取栈顶
};

#endif /* LinkStack_h */
