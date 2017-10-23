#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include <dimmath/sum.h>

TEST_CASE( "Vectors are computed", "[vector]" ) {
  REQUIRE(dimmath::sum(std::array<int, 1> { 1 }) == 1);
  REQUIRE(dimmath::sum(std::array<double, 2> { 1.2, 3.3, }) == 4.5);
  REQUIRE(dimmath::sum(std::array<float, 3> { 1.0f/3.0f, 0.0f }) == 1.0f/3.0f);
}