//
//  LinkQueue.cpp
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#include "LinkQueue.h"

// 构造函数
template <typename T>
LinkQueue<T>::LinkQueue() {
    Node<T> *head = new Node<T>;
    head->next = NULL;
    fff = bbb = head;
}

// 析构函数
template <typename T>
LinkQueue<T>::~LinkQueue() {
    Node<T> *p = fff;
    while (p) {
        Node<T> *q = p;
        p = p->next;
        delete q;
    }
    fff = NULL;
}

// 入队
template <typename T>
void LinkQueue<T>::push(T x) {
    Node<T> *s = new Node<T>;
    s->data = x;
    s->next = NULL;
    bbb->next = s;
    bbb = s;
}

// 出队
template <typename T>
T LinkQueue<T>::pop() {
    if (fff == bbb) {
        cerr << "下溢" << endl;
        exit(1);
    }
    Node<T> *p;
    p = fff->next;
    T x = p->data;
    fff->next = p->next;
    if (p->next == NULL) {
        bbb = fff;
    }
    delete p;
    return x;
}

// 判断队列是否为空
template <typename T>
bool LinkQueue<T>::empty() {
    return fff == bbb;
}

// 队列大小
template <typename T>
int LinkQueue<T>::size() {
    Node<T> *tmp = fff;
    int length = 0;
    while(tmp != NULL) {
        ++length;
        tmp = tmp->next;
    }
    return length - 1;
}

// 获取队首
template <typename T>
T LinkQueue<T>::front () {
    if (fff == bbb) {
        cerr << "队列为空";
        exit(1);
    }
    Node<T> *frontNode = fff->next;
    return frontNode->data;
}

// 获取队尾
template <typename T>
T LinkQueue<T>::back () {
    if (fff == bbb) {
        cerr << "队列为空";
        exit(1);
    }
    return bbb->data;
}


