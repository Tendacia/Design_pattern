//
// Created by Tendacia on 2024/1/19.
//

#ifndef DESIGNPATTERN_SRC_PROXY_H_
#define DESIGNPATTERN_SRC_PROXY_H_

#include <iostream>

class Subject
{
 public:
  virtual  void Request() = 0;
};

class RealSubject : public  Subject
{
 public:
  void Request() override
  {
    std::cout << "RealRequest\n";
  }
};

class Proxy : public  Subject
{
 public:
  Proxy(RealSubject* real_subject): real_subject_(real_subject)
  {}
  void Request() override
  {
    real_subject_->Request();
  }
 private:
  RealSubject * real_subject_;
};


#endif //DESIGNPATTERN_SRC_PROXY_H_
