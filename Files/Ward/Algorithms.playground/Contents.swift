//: Playground - noun: a place where people can play


// Queue

class Queue {
    
    // 判断队列是否为空
    public var isEmpty:Bool {
        return queue.isEmpty
    }
    
    // 队列大小
    public var size: Int {
        return queue.count
    }
    
    // 获取队首 注意 *队列是FIFO结构，且只能在后端进行插入操作因此队首则是数组的最后一个元素*
    public var peek: Any? {
        return queue.last
    }
    
    private var queue: [Any]
    
    // 构造函数
    init() {
        queue = [Any]()
    }
    
    // 入队
    public func enqueue(obj: Any) {
        queue.append(obj)
    }
    
    // 出队 *再次强调队列是FIFO结构 且只能在前端出队，因此出队的元素则是数组的第一个元素*

    public func dequeue() -> Any? {
        // 出队前先进行非空判断
        if isEmpty {
            return nil
        }
        return queue.removeFirst()
    }
    
}


// 测试

// 实例化一个队列
let newQueue = Queue()

// 入队
newQueue.enqueue(obj: 3)
newQueue.enqueue(obj: 5)
newQueue.enqueue(obj: 7)
newQueue.enqueue(obj: 9)
newQueue.size

// 出队
newQueue.dequeue() // FIFO结构因此3出队



// 栈是LIFO结构 后入先出


class Stack {
    
    private var stack: [Any]
    
    
    init() {
        stack = [Any]()
    }
    
    // 返回栈的大小
    public var size : Int {
        return stack.count
    }
    
    // 栈是否为空
    public var isEmpty: Bool {
        return stack.isEmpty
    }
    
    // 栈顶元素 *栈是LIFO结构 因此 栈顶就是数组最后一个元素*
    public var peek: Any? {
        return stack.last
    }
    
    // 入栈
    public func push(obj: Any) {
        stack.append(obj)
    }
    
    // 出栈 *栈是后入先出结构 因此出栈则把最后进入的元素弹出，也就是数组末尾*
    public func pop() -> Any? {
        if stack.isEmpty {
            return nil
        }
        return stack.removeLast()
    }
    
}


// 测试

let newStack = Stack()

newStack.peek
newStack.isEmpty
newStack.push(obj: "a")
newStack.push(obj: "b")
newStack.push(obj: "c")
newStack.push(obj: "d")
newStack.isEmpty
newStack.size
newStack.pop()
newStack.size





