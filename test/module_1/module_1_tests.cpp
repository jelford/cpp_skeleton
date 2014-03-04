#include <boost/test/unit_test.hpp>
#include "module_1/module_1.hpp"

using namespace module_1;

BOOST_AUTO_TEST_SUITE( module_one_test_suite )

BOOST_AUTO_TEST_CASE( first_test )
{
    BOOST_REQUIRE( function_1(1, 2) == 3 );
}

BOOST_AUTO_TEST_SUITE_END()
