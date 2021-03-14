/**
 *
 * AUTHORS: <Guy Cohen>
 * 
 * Date: 2021-03
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114412) == string("_===_\n(.,.)\n( : )\n(" ")"));
    CHECK(snowman(11114413) == string("_===_\n(.,.)\n( : )\n(___)"));
    CHECK(snowman(11114414) == string("_===_\n(.,.)\n( : )\n(   )"));
    CHECK(snowman(11114421) == string("_===_\n(.,.)\n(] [)\n( : )"));
    CHECK(snowman(21114412) == string(" ___\n.....\n(.,.)\n( : )\n(" ")"));
    CHECK(snowman(31114411) == string("  _\n /_\\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(41114411) == string(" ___\n(_*_)\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(32234411) == string("  _\n /_\\n(o.O)\n( : )\n( : )"));
    CHECK(snowman(43444411) == string(" ___\n(_*_)\n(-_-)\n( : )\n( : )"));
    CHECK(snowman(11111212) == string("_===_\n(.,.)/\n<( : )\n(" ")"));
    CHECK(snowman(14113313) == string("_===_\n(. .)\n/( : )\\\n(___)"));
    CHECK(snowman(13111114) == string("_===_\n(._.)\n<( : )>\n(   )"));
    CHECK(snowman(14444444) == string("_===_\n(- -)\n(   )\n(   )"));
    CHECK(snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(snowman(41114431) == string(" ___\n(_*_)\n(.,.)\n(> <)\n( : )"));
    CHECK(snowman(41113331) == string(" ___\n(_*_)\n(.,.)\n/(> <)\\\n( : )"));
    CHECK(snowman(41113331) == string(" ___\n(_*_)\n(.,.)\n/(> <)\\\n( : )"));
}



TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(13115114));
    CHECK_THROWS(snowman(-13111114));
    CHECK_THROWS(snowman(2147483647));
    CHECK_THROWS(snowman(141231831));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(54123123));
    CHECK_THROWS(snowman(15123133));
    CHECK_THROWS(snowman(14523123));
    CHECK_THROWS(snowman(14153113));
    CHECK_THROWS(snowman(14126123));
    CHECK_THROWS(snowman(14123713));
    CHECK_THROWS(snowman(14123153));
    CHECK_THROWS(snowman(14123110));
    CHECK_THROWS(snowman(14123125));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(14));
    CHECK_THROWS(snowman(1412));
    CHECK_THROWS(snowman(14122));
    CHECK_THROWS(snowman(141231));
    CHECK_THROWS(snowman(1412312));

}
