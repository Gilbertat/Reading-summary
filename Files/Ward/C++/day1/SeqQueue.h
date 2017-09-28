//
//  SeqQueue.h
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#ifndef SeqQueue_h
#define SeqQueue_h

#include <iostream>
using namespace std;

// 顺序存储结构: SeqQueue
template < typename T, int MaxSize >
class SeqQueue {
    T data[MaxSize];
    int fff, bbb;
public:
    SeqQueue();     // 构造函数
    void push(T x); // 入队
    T pop();        // 出队
    bool empty();   // 判断队列是否为空
    int size();     // 队列大小
    T front();      // 获取队首
    T back();       // 获取队尾
};

#endif /* SeqQueue_h */


//
// 实现使用[循环队列]，保留一个空位置来判断队空/满
//
// eg：[ MaxSize = 10 ]
//
//    0   1   2   3   4   5   6   7   8   9
//  —————————————————————————————————————————
//  |   |   |   |   |   |   |   |   |   |   |
//  —————————————————————————————————————————
//   ^ ^
//   | |
// fff bbb
//
//  fff == bbb, 队空。
//
//
// ～～～～～～～～～～～～～～～～～～～～～～～～～～
//
//
//    0   1   2   3   4   5   6   7   8   9
//  —————————————————————————————————————————
//  | g | h | i |   | a | b | c | d | e | f |
//  —————————————————————————————————————————
//            ^   ^
//            |   |
//           bbb fff
//
//  (fff + 1) / MaxSize == bbb, 队满。
//
