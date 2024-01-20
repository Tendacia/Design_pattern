//
// Created by Tendacia on 2024/1/20.
//

#ifndef DESIGNPATTERN_SRC_BRIDGE_H_
#define DESIGNPATTERN_SRC_BRIDGE_H_

#include<iostream>

class Implementor
{
 public:
  virtual void  Operation1() = 0;
  virtual  void Operation2() = 0;
};

class ConcreteImplementorA : public Implementor
{
 public:
  void Operation1() override
  {
    std::cout << "ImplementorA Operation1\n";
  }

  void Operation2() override
  {
    std::cout << "ImplementorB Operation2\n";
  }
};

class ConcreteImplementorB :public  Implementor
{
 public:
  void Operation1() override
  {
    std::cout << "ImplementationB Operation1\n";
  }

  void Operation2() override
  {
    std::cout << "ImplementationB Operation2\n";
  }
};

class Abstraction
{
 public:
  Abstraction(Implementor* implementor): implementor_(implementor)
  {}

  virtual  void Operation() = 0;

 protected:
  Implementor* GetImplementor()
  {
    return implementor_;
  }

 private:
  Implementor* implementor_;
};

class RefineAbstraction1 : public  Abstraction
{
 public:
  RefineAbstraction1(Implementor* implementor): Abstraction(implementor)
  {}
  void Operation() override
  {
    GetImplementor()->Operation1();
  }

};

class RefineAbstraction2: public  Abstraction
{
 public:
  RefineAbstraction2(Implementor* implementor): Abstraction(implementor)
  {}
  void Operation() override
  {
    GetImplementor()->Operation2();
  }
};




#endif //DESIGNPATTERN_SRC_BRIDGE_H_
