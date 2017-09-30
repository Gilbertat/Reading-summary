//
//  Node.h
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#ifndef Node_h
#define Node_h

template <typename T>
struct Node {
    T data;
    Node<T> *next;
};

#endif /* Node_h */
