#pragma once

#define USE_STL_VECTOR 1
#define USE_STL_DEQUE 1

#if USE_STL_VECTOR
#include <vector>
namespace titan::utl
{
	template<typename T>
	using vector = std::vector<T>;
}
#endif

#if USE_STL_DEQUE
#include <deque>
namespace titan::utl
{
	template<typename T>
	using deque = std::deque<T>;
}
#endif

namespace titan::utl
{
		// TODO: implement our own containers
}
