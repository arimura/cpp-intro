#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Std.hpp"

TEST_CASE("Std::memcopy functionality", "[std]") {
    REQUIRE(Std::memcopy() == 0);
}