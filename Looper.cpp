#include "Arduino.h"
#include "Looper.h"

Looper::Looper() {
  this->interval = 0;
  this->lastCalled = millis();
}

void Looper::setInterval(unsigned long interval, void (*callback)()) {
  this->interval = interval;
  this->callback = callback;
}

void Looper::update() {
  if (this->interval > 0) {
    if ( millis() - this->lastCalled >= this->interval ) {
      this->callback();
      this->lastCalled += this->interval;
    }
  }
}



