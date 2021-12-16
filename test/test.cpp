#include "../algorithms.h"
#include "../utils.h"
#include <vector>
#include <iostream>

using namespace snl;

int main() {
    std::vector<int> nums{0, 2, 4, 6, 8, 9};
    printLine(nums);
    printLine(nums[binarySearch<int>(nums, 9)]);

    return 0;
}