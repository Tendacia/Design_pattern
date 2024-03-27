

# 1 定义

Compose objects into tree structures to represent part-whole hierarchies. 
Composite lets clients treat individual objects and compositions of objects uniformly.

将对象划分成树结构表示整体和部分层次结构。Composite让客户端统一对待单独的物体和物体的组成部分。


# 2 结构

## 2.1 涉及成分


## 2.2 UML图

@startuml

class Client

class Component
{
    {method} Operation()
    {method} Add(Component)
    {method} Remove(Component)
    {method} GetChild(int)
}

class leaf

class Composite
{
    {method} Operation()
    {method} Add(Component)
    {method} Remove(Component)
    {method} GetChild(int)
}

Client --> Component
Leaf --|> Component
Composite --|> Component
Composite --> Component


@enduml

# 3 示例代码


# 4 总结

