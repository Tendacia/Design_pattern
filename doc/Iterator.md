

# 1 定义

Provide a way to access the elements of an aggregate object sequentially without
exposing its underlying representation.

提供了一种访问聚合类元素的方法而不暴露其底层实现。


# 2 结构


## 2.1 涉及成分

* Iterator
  * 为访问和遍历元素定义了接口
* ConcreteIterator
  * 实现了Iterator的接口
  * 维护了在聚合类中遍历的当前的位置
* Aggregate
  * 定义创建Iterator对象的接口
* ConcreteAggregate
  * 实现Iterator创建接口，返回ConcreteIterator的实例


## 2.2 UML图

@startuml

class Aggregate
{
    {method} CreateIterator()
}

class ConcreteAggregate
{
    CreateIterator()
}

class Iterator
{
    {method} First()
    {method} Next()
    {method} IsDone()
    {method} CurrentItem()
}

class ConcreteIterator

ConcreteAggregate --|> Aggregate
ConcreteIterator --|> Iterator
ConcreteIterator --> ConcreteAggregate
ConcreteAggregate ..> ConcreteIterator

@enduml



# 3 代码示例





# 4 总结

这里的Iterator和ConcreteAggregation是一一对应关系，关系是一个创建另一个，另一个可以访问创建它的对象。
因为有很多ConcreteAggregation和Iterator为了接口和使用方便所以用了继承。这里继承是从使用角度来讲的。