//
//  SeqStack.cpp
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#include "SeqStack.h"

// 构造函数
template <typename T, int MaxSize>
SeqStack<T, MaxSize>::SeqStack() {
    ttt = -1;
}

// 入栈
template <typename T, int MaxSize>
void SeqStack<T, MaxSize>::push(T x) {
    if (ttt == MaxSize - 1) {
        cerr << "上溢";
        exit(1);
    }
    data[++ttt] = x;
}

// 出栈
template <typename T, int MaxSize>
T SeqStack<T, MaxSize>::pop() {
    if (ttt == -1) {
        cerr << "下溢";
        exit(1);
    }
    return data[ttt--];
}

// 判断栈是否为空
template <typename T, int MaxSize>
bool SeqStack<T, MaxSize>::empty() {
    return ttt == -1;
}

// 栈大小
template <typename T, int MaxSize>
int SeqStack<T, MaxSize>::size() {
    return ttt + 1;
}

// 获取栈顶
template <typename T, int MaxSize>
T SeqStack<T, MaxSize>::top () {
    if (ttt == -1) {
        cerr << "队列为空";
        exit(1);
    }
    return data[ttt];
}

