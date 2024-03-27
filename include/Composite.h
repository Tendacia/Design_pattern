//
// Created by Tendacia on 2024/1/26.
//

#ifndef DESIGNPATTERN_SRC_COMPOSITE_H_
#define DESIGNPATTERN_SRC_COMPOSITE_H_

#include <iostream>
#include <list>

class Component
{
 public:
  virtual  void Operation();
  virtual void Add(Component* );
  virtual void Remove(Component* );

};

class Leaf: public Component
{
 public:
  void Operation() override
  {
    std::cout << "Leaf Operation\n";
  }

};


class Composite: public  Component
{
 public:
  void Operation() override
  {

  }

  void Add(Component *) override
  {

  }

  void Remove(Component *) override
  {

  }

 private:
  std::list<Component*> _component;
};



#endif //DESIGNPATTERN_SRC_COMPOSITE_H_
