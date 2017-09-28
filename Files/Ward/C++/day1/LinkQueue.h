//
//  LinkQueue.h
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#ifndef LinkQueue_h
#define LinkQueue_h

#include <iostream>
#include "Node.h"
using namespace std;

// 链接存储结构: LinkQueue
template <typename T>
class LinkQueue {
    Node<T> *fff, *bbb;
public:
    LinkQueue();    // 构造函数
    ~LinkQueue();   // 析构函数
    void push(T x); // 入队
    T pop();        // 出队
    bool empty();   // 判断队列是否为空
    int size();     // 队列大小
    T front();      // 获取队首
    T back();       // 获取队尾
};

#endif /* LinkQueue_h */
