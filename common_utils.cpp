//
// Created by 张啸宇 on 2019-07-08.
//
#include <random>
#include "common_utils.h"

int get_random_integer_number(int min_number, int max_number) {
    std::default_random_engine e;
    std::uniform_int_distribution<int> distribution(min_number,max_number);
    return distribution(e);
}
