// Dummy include file for Arduino's sake.

#define BOOST_NO_INTRINSIC_WCHAR_T
#define BOOST_DISABLE_ASSERTS
#define BOOST_NO_EXCEPTIONS
#define BOOST_EXCEPTION_DISABLE

// roby
#define BOOST_NO_CXX11_NULLPTR
#define BOOST_NO_CXX11_SMART_PTR

#define BOOST_NO_CXX11_HDR_TUPLE
#define BOOST_NO_CXX11_ALLOCATOR
#define BOOST_NO_CXX11_RVALUE_REFERENCES
#define BOOST_NO_CXX11_REF_QUALIFIERS


#ifdef F
#undef F
#endif
#ifdef B1
#undef B1
#endif

#import <iterator_base>

namespace std {

template<class InputIterator, class ForwardIterator>
  ForwardIterator uninitialized_copy ( InputIterator first, InputIterator last,
                                       ForwardIterator result )
{
  for (; first!=last; ++result, ++first)
    new (static_cast<void*>(&*result))
      typename iterator_traits<ForwardIterator>::value_type(*first);
  return result;
};

}
#define __HP_aCC
#import <exception>
namespace boost {
	void throw_exception(std::exception& e)
	{};
}

