#define BOOST_ALL_DYN_LINK
#define BOOST_TEST_MODULE BoostTestModule
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(BoostLib)

BOOST_AUTO_TEST_CASE(doesItWskork) {
    BOOST_TEST(1 + 1 == 2);
}

BOOST_AUTO_TEST_SUITE_END()