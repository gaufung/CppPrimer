#ifndef EX_16_41
#define EX_16_41
#include <type_traits>
template<typename T>
auto sum(T lhs, T rhs) -> decltype( lhs + rhs)
{
    return lhs + rhs;
}
#endif