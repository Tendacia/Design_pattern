//
// Created by Tendacia on 2024/1/19.
//

#ifndef DESIGNPATTERN_SRC_ADAPTER_H_
#define DESIGNPATTERN_SRC_ADAPTER_H_

#include <iostream>

class Adaptee
{
 public:
  void SpecialRequest()
  {
    std::cout << "from the Adaptee\n";
  }
};

class Target
{
 public:
  virtual void Request() = 0;
};


class Adapter: public  Target
{
 public:
  Adapter(Adaptee* adaptee) : adaptee_(adaptee)
  {}
  void Request() override
  {
    adaptee_->SpecialRequest();
  }

 private:
  Adaptee * adaptee_;
};





#endif //DESIGNPATTERN_SRC_ADAPTER_H_
