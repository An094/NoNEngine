#pragma once

//STL
#include <memory>
#include <stdint.h>
#include <set>
#include <random>
#include <limits>
#include <vector>
#include <string>
#include <bitset>
#include <cassert>
#include <assert.h>
#include <sstream>
#include <istream>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <map>
#include <stack>

template<typename T> using Shared = std::shared_ptr<T>;
template<typename T> using Unique = std::unique_ptr<T>;

#if ON_NONENGINE
	#if DYNAMIC_BUILD
		#ifdef  _MSC_VER
			#define NON_API __declspec(dllexport)
		#else
			#define NON_API __attribute__((visibility("default")))
		#endif //  _MSC_VER
	#else
			#define	NON_API
	#endif
#else
	#if DYNAMIC_IMPORT
		#ifdef  _MSC_VER
			#define NON_API __declspec(dllimport)
		#else
			#define NON_API
		#endif //  _MSC_VER
	#else
		#define	NON_API
	#endif
#endif

//Runtime assert
#define NON_ASSERT assert

//Static
#if defined(__clang__) || defined(__gcc__)
	#define NON_STATIC_ASSERT _Static_assert
#else
	#define NON_STATIC_ASSERT static_assert
#endif

#if defined(__clang__) || defined(__gcc__)
	#define NON_FORCE_INLINE __attribute__((always_inline)) inline
	#define NON_NOINLINE __attribute__((noinline))
#elif defined(_MSC_VER)
	#define NON_FORCE_INLINE __forceinline
	#define NON_NOINLINE __declspec(noinline)
#else
	#define VI_FORCE_INLINE inline
	#define VI_NOINLINE
#endif

#define NON_FREE_MEMORY(memory) if(memory != nullptr) {delete memory; memory = nullptr;}