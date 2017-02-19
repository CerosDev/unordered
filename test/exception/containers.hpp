
// Copyright 2006-2009 Daniel James.
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// clang-format off
#include "../helpers/prefix.hpp"
#include <boost/unordered_map.hpp>
#include <boost/unordered_set.hpp>
#include "../helpers/postfix.hpp"
// clang-format on

#include "../objects/exception.hpp"

typedef boost::unordered_set<
    test::exception::object,
    test::exception::hash,
    test::exception::equal_to,
    test::exception::allocator<test::exception::object> > test_set;
typedef boost::unordered_multiset<
    test::exception::object,
    test::exception::hash,
    test::exception::equal_to,
    test::exception::allocator2<test::exception::object> > test_multiset;
typedef boost::unordered_map<
    test::exception::object,
    test::exception::object,
    test::exception::hash,
    test::exception::equal_to,
    test::exception::allocator2<test::exception::object> > test_map;
typedef boost::unordered_multimap<
    test::exception::object,
    test::exception::object,
    test::exception::hash,
    test::exception::equal_to,
    test::exception::allocator<test::exception::object> > test_multimap;
typedef boost::unordered_set<
    std::pair<test::exception::object, test::exception::object>,
    test::exception::hash,
    test::exception::equal_to,
    test::exception::allocator<test::exception::object> > test_pair_set;
typedef boost::unordered_multiset<
    std::pair<test::exception::object, test::exception::object>,
    test::exception::hash,
    test::exception::equal_to,
    test::exception::allocator2<test::exception::object> > test_pair_multiset;


#define CONTAINER_SEQ (test_set)(test_multiset)(test_map)(test_multimap)
#define CONTAINER_PAIR_SEQ (test_pair_set)(test_pair_multiset)(test_map)(test_multimap)
