#ifndef Looper_h
#define Looper_h

#include "Arduino.h"

class Looper {
  public:
    Looper();
    void setInterval(unsigned long, void (*)());
    void update();
  private:
    void (*callback)();
    unsigned long interval;
    unsigned long lastCalled;
};

#endif

