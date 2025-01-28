#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

// SUBMIT THIS FILE

// this includes the function signatures (prototypes) from ceab.h
extern "C" {
#include "ceab.h"
};


////////////////////////////////////////
// don't edit anything above this line!
////////////////////////////////////////

/* tests for aus_remaining */
TEST_SUITE_BEGIN("aus_remaining tests");

    // your test cases for aus_remaining go here
    //Test cases for if already_taken < required
    //testing that 0 is returned
    //Math
    TEST_CASE("already taken > required for MA/NS") {
        CHECK(aus_remaining(0,195+1)==0);
    }
    //Engineering Science
    TEST_CASE("already taken > required for ES/ED/CS") {
        CHECK(aus_remaining(2,225+1)==0);
    }


    //Test cases for if already_taken > required
    //testing that correct remaining is returned
    //Math
    TEST_CASE("already taken < required for MA") {
        CHECK(aus_remaining(0,195-1)==1);
    }
    //Natural Science
    TEST_CASE("already taken < required for NS") {
        CHECK(aus_remaining(1,195-1)==1);
    }
    //Engineering Science
    TEST_CASE("already taken < required for ES") {
        CHECK(aus_remaining(2,225-1)==1);
    }
    //Engineering design
    TEST_CASE("already taken < required for ED") {
        CHECK(aus_remaining(3,225-1)==1);
    }
    //Complementary studies
    TEST_CASE("already taken < required for CS") {
        CHECK(aus_remaining(4,225-1)==1);
    }


TEST_SUITE_END();

/* tests for can_graduate */
TEST_SUITE_BEGIN("can_graduate tests");

    // your test cases for can_graduate go here
    //testing combined AUs
    //MA + NS
    //Can graduate
    TEST_CASE("CAN_GRADUATE for MA + NS") {
        CHECK(can_graduate(195,195+30,500,500,500)==1);
    }
    //Cannot graduate
    TEST_CASE("CANNOT_GRADUATE for MA + NS") {
        CHECK(can_graduate(195,195+30-1,500,500,500)==0);
    }
    //ES + ED
    //Can graduate
    TEST_CASE("CAN_GRADUATE for ES + ED") {
        CHECK(can_graduate(195,195+30,225,225+450,600)==1);
    }
    //Cannot graduate
    TEST_CASE("CANNOT_GRADUATE for ES + ED") {
        CHECK(can_graduate(195,195+30,225,225+450-1,600)==0);
    }

    //Testing for all areas
    //Can graduate
    TEST_CASE("CAN_GRADUATE for MA + NS + ES + ED + CS") {
        CHECK(can_graduate(195,195+30,225+305,225+450,225)==1);
    }
    //Cannot graduate
    TEST_CASE("CANNOT_GRADUATE for MA + NS + ES + ED + CS") {
        CHECK(can_graduate(195,195+30,225+305-1,225+450,225)==0);
    }

    //Testing if area minumums are met
    //Cannot graduate
    TEST_CASE("CANNOT_GRADUATE for MA") {
        CHECK(can_graduate(194,195+30+1,225,225+450,530)==0);
    }
    //Can graduate
    TEST_CASE("CANNOT_GRADUATE for NS") {
        CHECK(can_graduate(195+30+1,194,225,225+450,530)==0);
    }
    //Can graduate
    TEST_CASE("CANNOT_GRADUATE for ES") {
        CHECK(can_graduate(195,195+30,224,225+450+1,530)==0);
    }
    //Can graduate
    TEST_CASE("CANNOT_GRADUATE for ED") {
        CHECK(can_graduate(195,195+30,225+450+1,224,530)==0);
    }
    //Can graduate
    TEST_CASE("CANNOT_GRADUATE for CS") {
        CHECK(can_graduate(195+1,195+30,225,225+450+305,224)==0);
    }



TEST_SUITE_END();

