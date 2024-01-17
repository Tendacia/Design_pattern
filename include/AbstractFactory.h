//
// Created by Tendacia on 2024/1/17.
//

#ifndef DESIGNPATTERN_SRC_ABSTRACTFACTORY_H_
#define DESIGNPATTERN_SRC_ABSTRACTFACTORY_H_

#include <iostream>

class AbstractProductA
{
 public:
  virtual void FuncA() = 0;
};

class ProductA1 : public AbstractProductA
{
 public:
  void FuncA() override
  {
    std::cout << "From ProductA1\n";
  }
};

class ProductA2 : public AbstractProductA
{
 public:
  void FuncA() override
  {
    std::cout << "From ProductA2\n";
  }
};

class AbstractProductB
{
 public:
  virtual void FuncB() = 0;
};

class ProductB1 : public AbstractProductB
{
 public:
  void FuncB() override
  {
    std::cout << "From ProductB1\n";
  }
};

class ProductB2 : public  AbstractProductB
{
 public:
  void FuncB() override
  {
    std::cout << "From ProductB2\n";
  }
};

class AbstractFactory
{
 public:
  virtual AbstractProductA* CreateProductA() = 0;
  virtual AbstractProductB* CreateProductB() = 0;
};

class ConcreteFactory1 : public AbstractFactory
{
 public:
  AbstractProductA* CreateProductA() override
  {
    return new ProductA1;
  }

  AbstractProductB* CreateProductB() override
  {
    return new ProductB1;
  }
};

class ConcreteFactory2 : public AbstractFactory
{
 public:
  AbstractProductA* CreateProductA() override
  {
    return new ProductA2;
  }

  AbstractProductB* CreateProductB() override
  {
    return new ProductB2;
  }
};

class Client
{
 private:
  AbstractFactory * factory_;
  AbstractProductA * product_a_;
  AbstractProductB* product_b_;

 public:
  Client(AbstractFactory* factory) : factory_(factory), product_a_(factory_->CreateProductA()),
                                  product_b_(factory_->CreateProductB())
  {
  }

  void test()
  {
    product_a_->FuncA();
    product_b_->FuncB();
  }
};



#endif //DESIGNPATTERN_SRC_ABSTRACTFACTORY_H_
