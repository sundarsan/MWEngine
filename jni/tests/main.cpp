#include <gtest/gtest.h>
#include <ctime>
#include <cstdlib>
#include "helpers/helper.cpp"

#include "audiobuffer_test.cpp"
#include "audiochannel_test.cpp"
#include "processors/tremolo_test.cpp"

int main( int argc, char *argv[] )
{
    srand( time( 0 ));

    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
