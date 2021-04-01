#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../sorts.h"

#include <vector>

TEST_CASE( "Insertion sorts are executed", "[insertion-sort]" ) {
    std::vector<int> v {};
    std::vector<int> v_ans {};
    
    SECTION( "insertion sort works on a standard set of numbers" ) {
        
        v = {4,1,4,2,6,3};
        v_ans = {1,2,3,4,4,6};

        REQUIRE( sort::insertion_sort(v) == v_ans );

    }

    SECTION( "insertion sort works on a negative set of numbers" ) {
        
        v = {-1,-3,4,-2,0,3,4,5};
        v_ans = {-3,-2,-1,0,3,4,4,5};

        REQUIRE( sort::insertion_sort(v) == v_ans );

    }

    SECTION( "insertion sort works on a single number" ) {
        
        v = {1};
        v_ans = {1};

        REQUIRE( sort::insertion_sort(v) == v_ans );

    }

    SECTION( "insertion sort works on an empty vector" ) {
        
        v = {};
        v_ans = {};

        REQUIRE( sort::insertion_sort(v) == v_ans );

    }
}