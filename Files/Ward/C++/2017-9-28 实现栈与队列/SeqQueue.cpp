//
//  SeqQueue.cpp
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#include "SeqQueue.h"

// 构造函数
template <typename T, int MaxSize>
SeqQueue<T, MaxSize>::SeqQueue() {
    fff = bbb = 0;
}

// 入队
template <typename T, int MaxSize>
void SeqQueue<T, MaxSize>::push(T x) {
    if ((bbb + 1) % MaxSize == fff) {
        cerr << "上溢";
        exit(1);
    }
    bbb = (bbb + 1) % MaxSize;
    data[bbb] = x;
}

// 出队
template <typename T, int MaxSize>
T SeqQueue<T, MaxSize>::pop() {
    if (fff == bbb) {
        cerr << "下溢";
        exit(1);
    }
    fff = (fff + 1) % MaxSize;
    return data[fff];
}

// 判断队列是否为空
template <typename T, int MaxSize>
bool SeqQueue<T, MaxSize>::empty() {
    return fff == bbb;
}

// 队列大小
template <typename T, int MaxSize>
int SeqQueue<T, MaxSize>::size() {
    if (bbb >= fff) {
        return bbb-fff;
    } else {
        return MaxSize - fff + bbb;
    }
}

// 获取队首
template <typename T, int MaxSize>
T SeqQueue<T, MaxSize>::front () {
    if (fff == bbb) {
        cerr << "队列为空";
        exit(1);
    }
    return data[(fff + 1) % MaxSize];
}

// 获取队尾
template <typename T, int MaxSize>
T SeqQueue<T, MaxSize>::back () {
    if (fff == bbb) {
        cerr << "队列为空";
        exit(1);
    }
    return data[bbb];
}


