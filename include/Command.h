//
// Created by Tendacia on 2024/1/18.
//

#ifndef DESIGNPATTERN_SRC_COMMAND_H_
#define DESIGNPATTERN_SRC_COMMAND_H_

#include <iostream>

class Command {
 public:
  virtual  void Execute() = 0;
  virtual  void UnExecute()  = 0;

};

class Receiver
{
 public:
  void on() const
  {
    std::cout << "turn on\n";
  }

  void off() const
  {
    std::cout << "turn off\n";
  }
};

class OnOffCommand :public Command
{
 public:
  OnOffCommand(Receiver* receiver) : receiver_(receiver)
  {}
  void Execute() override
  {
    receiver_->on();
  }

  void UnExecute() override
  {
    receiver_->off();
  }

 private:
  Receiver* receiver_;
};


class Invoker
{
 public:
  Invoker(Command* command) : command_ (command){}

  void On()
  {
    command_->Execute();
  }

  void Off()
  {
    command_->UnExecute();
  }
 private:
  Command * command_;

};




#endif //DESIGNPATTERN_SRC_COMMAND_H_
