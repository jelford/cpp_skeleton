#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE( module_two_test_suite )

BOOST_AUTO_TEST_CASE( first_test )
{
    BOOST_REQUIRE( 3 == 5 );
}

BOOST_AUTO_TEST_SUITE_END()
