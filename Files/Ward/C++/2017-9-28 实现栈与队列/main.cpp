//
//  main.cpp
//  C++
//
//  Created by StoneN on 2017/9/28.
//  Copyright © 2017年 StoneN. All rights reserved.
//

#include "SeqQueue.cpp"
#include "LinkQueue.cpp"
#include "SeqStack.cpp"
#include "LinkStack.cpp"

void testSeqQueue();
void testLinkQueue();
void testSeqStack();
void testLinkStack();

int main(int argc, const char * argv[]) {
    
//    testSeqQueue();
//    testLinkQueue();
    testSeqStack();
    testLinkStack();
    return 0;
}

void testSeqQueue() {
    SeqQueue<int, 10> seqQueue;
    
    if (seqQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
    seqQueue.push(0);
    seqQueue.push(1);
    seqQueue.push(2);
    seqQueue.push(3);
    seqQueue.push(4);
    seqQueue.push(5);
    seqQueue.push(6);
    seqQueue.push(7);
    
    cout << "Size = " << seqQueue.size() << endl;
    cout << "Back = " << seqQueue.back() << endl;
    seqQueue.pop();
    seqQueue.pop();
    cout << "Front = " << seqQueue.front() << endl;
    
    if (seqQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
}

void testLinkQueue() {
    LinkQueue<int> linkQueue;
    
    if (linkQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
    linkQueue.push(0);
    linkQueue.push(1);
    linkQueue.push(2);
    linkQueue.push(3);
    linkQueue.push(4);
    linkQueue.push(5);
    linkQueue.push(6);
    linkQueue.push(7);
    
    cout << "Size = " << linkQueue.size() << endl;
    cout << "Back = " << linkQueue.back() << endl;
    linkQueue.pop();
    linkQueue.pop();
    cout << "Front = " << linkQueue.front() << endl;

    if (linkQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
}

void testSeqStack() {
    SeqStack<int, 10> seqStack;
    
    if (seqStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }
    seqStack.push(0);
    seqStack.push(1);
    seqStack.push(2);
    seqStack.push(3);
    seqStack.push(4);
    seqStack.push(5);
    seqStack.push(6);
    seqStack.push(7);
    
    cout << "Size = " << seqStack.size() << endl;
    seqStack.pop();
    seqStack.pop();
    cout << "Front = " << seqStack.top() << endl;
    
    if (seqStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }
}

void testLinkStack() {
    LinkStack<int> linkStack;
    
    if (linkStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }
    linkStack.push(0);
    linkStack.push(1);
    linkStack.push(2);
    linkStack.push(3);
    linkStack.push(4);
    linkStack.push(5);
    linkStack.push(6);
    linkStack.push(7);
    
    cout << "Size = " << linkStack.size() << endl;
    linkStack.pop();
    linkStack.pop();
    cout << "Front = " << linkStack.top() << endl;
    
    if (linkStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }
}




