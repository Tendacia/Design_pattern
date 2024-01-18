//
// Created by Tendacia on 2024/1/18.
//

#ifndef DESIGNPATTERN_SRC_SINGLETON_H_
#define DESIGNPATTERN_SRC_SINGLETON_H_

#include <mutex>


class Singleton {
 public:
  static Singleton* GetInstance()
  {
    if(instance_ == nullptr)
    {
      instance_ = new Singleton;
    }
    return instance_;
  }
  void CountAdd()
  {
    ++count_;
  }

  [[nodiscard]]int GetCount() const
  {
    return count_;
  }

 private:
  Singleton() = default;
  static Singleton * instance_;
  int count_{0};
};





class SingletonThreadSafe
{
 private:
  static SingletonThreadSafe* instance_;
  static  std::once_flag init_flag;
  SingletonThreadSafe()= default;

 public:
  static SingletonThreadSafe* GetInstance()
  {
    std::call_once(init_flag, [](){
      instance_ = new SingletonThreadSafe;
    });
    return instance_;
  }
};




#endif //DESIGNPATTERN_SRC_SINGLETON_H_
