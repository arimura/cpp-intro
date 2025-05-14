#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Std.hpp"

TEST_CASE("Std::memcopy returns 0", "[std]") {
    REQUIRE(Std::memcopy() == 0);
}

TEST_CASE("Std::memcopy functionality", "[std]") {
    // このテストケースは、memcopyメソッドが将来的に
    // 実際にメモリコピーを行う実装に変更された場合に備えたものです
    
    // 将来的な実装で、以下のようなテストが可能になります
    // int result = Std::memcopy();
    // REQUIRE(result == 期待値);
    
    // 現時点では単純に0が返ることを確認するだけです
    REQUIRE(Std::memcopy() == 0);
}