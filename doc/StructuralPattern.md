

# 1 定义

![Decorator](Decorator.md)
![Facade](Facade.md)
![Adapter](Adapter.md)
![Bridge](Bridge.md)
![Proxy](Proxy.md)
![Decorator](Decorator.md)


# 2 结构

@startuml

class C
class CC
class D
class CD
entity Decorator

CC --|> C
D --|> C
CD --|> D
Cd --> D
Decorator .. C


class Client
class Target
class Adapter
class Adaptee

Client --> Target
Adapter --|> Target
Adapter --> Adaptee

class Client2
class Facade
class Other1
class Other2

Client2 --> Facade
Facade -- Other1
Facade --Other2


class Subject
class RealSubject
class Proxy
Proxy --|> Subject
RealSubject --|> Subject
Proxy --> RealSubject


class Abstraction
class RefineAbstraction1
class RefineAbstraction2
class Implementor
class ConcreteImplementor1
class ConcreteImplementor2

RefineAbstraction1 --|> Abstraction
RefineAbstraction2 --|> Abstraction
ConcreteImplementor1 --|> Implementor
ConcreteImplementor2 --|> Implementor
Abstraction --> Implementor

class Client3
class Strategy
class ConcreteStrategy1
class ConcreteStrategy2

Client3 --> Strategy
ConcreteStrategy1 --|> Strategy
ConcreteStrategy2 --|> Strategy



@enduml