#ifndef moses_FFState_h
#define moses_FFState_h

#include <vector>
#include <stddef.h>
#include "util/exception.hh"

namespace Moses
{

class FFState
{
public:
  virtual ~FFState();
  virtual int Compare(const FFState& other) const = 0;
  virtual size_t hash() const = 0;
  virtual bool operator==(const FFState& other) const = 0;
};

class DummyState : public FFState
{
public:
  DummyState()  {}
  int Compare(const FFState& other) const {
    return 0;
  }

  virtual size_t hash() const {
	  return 0;
  }

  virtual bool operator==(const FFState& other) const
  {
    UTIL_THROW2("TODO:Haven't figure this out yet");
  }

};

}
#endif
