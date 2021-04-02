#include <iostream>
#include <vector>
#include "sorts.h"

int main()
{
    std::vector<int> v = {92, 85, 17, 8, 80, 76, 88, 6, 57, 79, 33, 58, 1, 9, 20, 24, 10, 62, 42, 15, 46, 53, 83, 52, 19};

    std::cout << "######################### INSERTION SORT #########################" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    for (auto i = v.begin(); i != v.end(); ++i) std::cout << *i << ' ';
    std::cout << std::endl;

    std::vector<int> v_ans = sort::insertion_sort(v);

    for (auto i = v_ans.begin(); i != v_ans.end(); ++i) std::cout << *i << ' ';
    std::cout << std::endl;

    std::cout << "------------------------------------------------------------------" << std::endl;

    std::cout << "########################### MERGE SORT ###########################" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    for (auto i = v.begin(); i != v.end(); ++i) std::cout << *i << ' ';
    std::cout << std::endl;

    v_ans = sort::merge_sort(v, 0, v.size() - 1);

    for (auto i = v_ans.begin(); i != v_ans.end(); ++i) std::cout << *i << ' ';
    std::cout << std::endl;

    std::cout << "------------------------------------------------------------------" << std::endl;

}