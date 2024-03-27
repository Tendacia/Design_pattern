

# 1 定义

Allow an object to alter its behavior when its internal state changes. The object
will appear to change its class.

允许当一个对象的内部状态发生改变的时候改变其行为。对象好像会更改其类型。


# 2 结构


## 2.1 涉及成分


## 2.2 UML图

@startuml

class Context
{
    {method} Request()
}

class State
{
    {method} Handle()
}

class ConcreteStateA
{
    {method} Handle()
}

class ConcreteStateB
{
    {method} Handle()
}

entity Request()
{
    state->Handle()
}

Context --> State
Context .. "Request()"
ConcreteStateA --|> State
ConcreteStateB --|> State

@enduml

# 3 代码示例


1
# 4 总结

每个状态都对不同的动作进行了实现，所有状态有共同的接口，所以用了继承。
对于每个环境来说，将状态和部分方法进行了打包，所以用到了“has a".

