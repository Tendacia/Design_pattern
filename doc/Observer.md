

# 1  定义

Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
定义了一个一对多的对象之间的依赖关系，当一个对象状态发生改变时，其他依赖于它的对象都要自动更新。常被称作依赖，订阅-发布。

# 2 UML结构图

## 2.1 简要描述

* Observable类
  * 该类是一个接口类
  * 该类有接口`add() remove() notify()`
* Observer类
  * 该类是一个接口类
  * 该类有接口`update()`
* ConcreteObservable类
  * 该类继承自Observable
  * 添加方法 `getstate() 具体的方法根据具体的类确定`
* ConcreteObserver类
  * 该类继承自Observer类
  * 包含一个ConcreteObservable的引用

## 2.2 UML描述

@startuml
class Observable
{
  {method} add(Observer o)
  {method} remove(Observer o)
  {method} notify()
}

class Observer
{
  {method} update()
}

class WeatherStation
{
  {method} add(Observer o)
  {method} remove(Observer o)
  {method} notify()
  {method} getTemperature()
}

class PhoneDisplay
{
  {method} update()
  {method} display()
}

Observable "1" --> "many" Observer
WeatherStation --|> Observable
PhoneDisplay --|> Observer
PhoneDisplay --> WeatherStation

@enduml


# 3 代码实现

![头文件](../include/Observer.h)
！[测试文件](../src/Observer.cpp)



