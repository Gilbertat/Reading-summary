//
//  SeqStack.h
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#ifndef SeqStack_h
#define SeqStack_h

#include <iostream>
using namespace std;

// 顺序存储结构: SeqStack
template < typename T, int MaxSize >
class SeqStack {
    T data[MaxSize];
    int ttt;
public:
    SeqStack();     // 构造函数
    void push(T x); // 入栈
    T pop();        // 出栈
    bool empty();   // 判断栈是否为空
    int size();     // 栈大小
    T top();        // 获取栈顶
};

#endif /* SeqStack_h */
