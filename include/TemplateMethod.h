//
// Created by Tendacia on 2024/1/26.
//

#ifndef DESIGNPATTERN_SRC_TEMPLATEMETHOD_H_
#define DESIGNPATTERN_SRC_TEMPLATEMETHOD_H_

#include <iostream>


class AbstractClass
{
 public:
  void TemplateMethod()
  {
    PrimitiveOperation1();
    PrimitiveOperation2();
  }
  virtual  void PrimitiveOperation1() = 0;
  virtual  void PrimitiveOperation2() = 0;
};

class ConcreteClass1 : public  AbstractClass
{
 public:
  void PrimitiveOperation1() override
  {
    std::cout << "Class1 Operation1\n";
  }

  void PrimitiveOperation2() override
  {
    std::cout << "Class1 Operation2\n";
  }
};

class ConcreteClass2 : public  AbstractClass
{
 public:
  void PrimitiveOperation1() override
  {
    std::cout << "Class2 Operation1\n";
  }

  void PrimitiveOperation2() override
  {
    std::cout << "Class2 Operation2\n";
  }
};

#endif //DESIGNPATTERN_SRC_TEMPLATEMETHOD_H_
