//
// Created by Tendacia on 2024/1/15.
//

#ifndef DESIGNPATTERN_INCLUDE_STRATEGY_H_
#define DESIGNPATTERN_INCLUDE_STRATEGY_H_


class Compositor
{
 public:
  virtual int Compose(int natural[], int stretch[], int shrink[], int componentCount,
                      int lineWidth, int breaks[]) = 0;
 protected:
  Compositor();
};

class SimpleCompositor: public  Compositor
{
 public:
  SimpleCompositor();

  virtual int Compose(
      int natural[], int stretch[], int shrink[],
      int component_count, int line_width, int breaks[]
      );
  // ...
};

class TexCompositor : public  Compositor
{
 public:
  TexCompositor();

  virtual int Compose(
      int natural[], int stretch[], int shrink[], int component_count,
      int line_width, int breaks[]
      );

  //...
};





class Composition
{
 public:
  Composition(Compositor* );
  void Repair();

 private:
  Compositor* _compositor;
  int _componentCount;
  int _lineWidth;
  int * _lineBreaks;

  int _lineCount;
};


void Composition::Repair() {

  int* natural;
  int* stretchability;
  int* shrinkability;
  int component_count;
  int* breaks;

  //prepare the arrays with the desired component sizes
  //...

  //determine where the breaks are:
  int break_count;
  break_count = _compositor->Compose(
      natural,stretchability,shrinkability,
      component_count, _lineWidth, breaks
      );

  //lay out components according to breaks
  //...
}


/*
@startuml=

 class Class11
 {
 + data;
 - data1;
 ~ data2;

 {method} function()

 }

Class11 <|.."is a" Class12
Class13 --> Class14
Class15 ..> Class16
Class17 ..|> Class18
Class19 <--* Class20
@enduml
*/


#endif //DESIGNPATTERN_INCLUDE_STRATEGY_H_
