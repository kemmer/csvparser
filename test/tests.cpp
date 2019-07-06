// Created by Cristiano Kemmer on 7/6/19.
// Project csvparser

#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE csvparser_test
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_SUITE(csvparser_test_suite)

BOOST_AUTO_TEST_CASE(nonsense)
{
  BOOST_TEST (1 == 1);
}

BOOST_AUTO_TEST_SUITE_END()
