#ifndef SHELL_SORT_HPP
#define SHELL_SORT_HPP

namespace psarev
{
  template< typename Iter, typename Compare >
  void sortShell(Iter begin, Iter end, Compare compare);
}

#endif