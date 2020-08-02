#ifndef BOOST_SHARED_PTR_HPP_INCLUDED
#define BOOST_SHARED_PTR_HPP_INCLUDED

//
//  shared_ptr.hpp
//
//  (C) Copyright Greg Colvin and Beman Dawes 1998, 1999.
//  Copyright (c) 2001-2008 Peter Dimov
//
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
//  See http://www.boost.org/libs/smart_ptr/ for documentation.
//

#if __cplusplus < 201402L
#include <boost/smart_ptr/shared_ptr.hpp>
#else
#include <memory>
namespace boost {
using std::shared_ptr;
using std::bad_weak_ptr;
using std::static_pointer_cast;
using std::const_pointer_cast;
using std::dynamic_pointer_cast;
using std::reinterpret_pointer_cast;
using std::get_deleter;

template<class T> inline typename shared_ptr<T>::element_type * get_pointer(shared_ptr<T> const & p) noexcept {
    return p.get();
}
}
#endif
#endif  // #ifndef BOOST_SHARED_PTR_HPP_INCLUDED
