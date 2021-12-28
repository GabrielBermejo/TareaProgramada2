#ifndef OUTOFBOUNDSEXCEPTION_H
#define OUTOFBOUNDSEXCEPTION_H

#include <exception>

class OutOfBoundsException : public std::exception
{
  public:
  OutOfBoundsException() noexcept = default;
  ~OutOfBoundsException() = default;

  virtual const char* what() const noexcept {
    return "There's no person with the ID that you typed";
  }

};

#endif