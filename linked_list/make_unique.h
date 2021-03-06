#ifndef MAKE_UNIQUE_H
#define MAKE_UNIQUE_H

#include <memory>

#if __cplusplus<=201103L

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args)
{
        return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

#else

using std::make_unique;

#endif

#endif

