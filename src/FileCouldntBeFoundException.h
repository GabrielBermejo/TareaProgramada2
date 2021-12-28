#ifndef FILECOULDNTBEFOUNDEXCEPTION_H
#define FILECOULDNTBEFOUNDEXCEPTION_H

#include <exception>

class FileCouldntBeFoundException : public std::exception
{
  public:
  FileCouldntBeFoundException() noexcept = default;
  ~FileCouldntBeFoundException() = default;

  virtual const char* what() const noexcept {
    return "File \"Personas.txt\" can't be found";
  }

};

#endif