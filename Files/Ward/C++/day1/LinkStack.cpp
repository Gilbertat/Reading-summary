//
//  LinkStack.cpp
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#include "LinkStack.h"

// 构造函数
template <typename T>
LinkStack<T>::LinkStack() {
    ttt = NULL;
}

// 析构函数
template <typename T>
LinkStack<T>::~LinkStack() {
    Node<T> *p = ttt;
    while (p) {
        Node<T> *q = p;
        p = p->next;
        delete q;
    }
    ttt = NULL;
}

// 入栈
template <typename T>
void LinkStack<T>::push(T x) {
    Node<T> *s = new Node<T>;
    s->data = x;
    s->next = ttt;
    ttt = s;
}

// 出栈
template <typename T>
T LinkStack<T>::pop() {
    if (ttt == NULL) {
        cerr << "下溢" << endl;
        exit(1);
    }
    T x = ttt->data;
    Node<T> *p;
    p = ttt;
    ttt = ttt->next;
    delete p;
    return x;
}

// 判断栈是否为空
template <typename T>
bool LinkStack<T>::empty() {
    return ttt == NULL;
}

// 栈大小
template <typename T>
int LinkStack<T>::size() {
    Node<T> *tmp = ttt;
    int length = 0;
    while(tmp != NULL) {
        ++length;
        tmp = tmp->next;
    }
    return length;
}

// 获取栈顶
template <typename T>
T LinkStack<T>::top () {
    if (ttt == NULL) {
        cerr << "队列为空";
        exit(1);
    }
    return ttt->data;
}

