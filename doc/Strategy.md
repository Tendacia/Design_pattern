

# 1 定义

定义了一系列的算法，包装起来，让他们之间可以进行交换。策略模式让让算法和使用它的客户端之间解耦合。

Define a family of algorithms, encapsulate each one, and make them interchangeable. 
Strategy lets the algorithm vary independently from clients that use it.

# 2 结构

## 2.1 涉及成分

* Strategy(Compositor)
  * 为所有支持的算法声明接口。客户端通过接口使用具体策略中的算法
* ConcreteStrategy(SimpleCompositor,TexCompositor)
  * 实现Strategy中的接口
* Context(Composition)
  * 维护一个策略类的指针或者引用




## 2.2 UML图

@startuml

class Context
{
  ContextInterface()
}

class Strategy
{
  +{method} AlgorithmInterface()
}
class ConcreteStrategyA
{
+{method} AlgorithmInterface()
}

class ConcreteStrategyB
{
+{method} AlgorithmInterface()
}

class ConcreteStrategyC
{
+{method} AlgorithmInterface()
}

Context --> Strategy


ConcreteStrategyA --|> Strategy
ConcreteStrategyB --|> Strategy
ConcreteStrategyC --|> Strategy

@enduml


# 3 代码

![](../include/Strategy.h)