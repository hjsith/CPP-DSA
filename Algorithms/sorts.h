#pragma once
#define sorts

#include <vector>

namespace sort
{
    std::vector<int> insertion_sort(std::vector<int> data)
    {
        for (int i = 1; i < data.size(); ++i)
        {
            int value = data[j];
            auto j = i - 1;
            while (j >= 0 && data[j] > value)
            {
                data[j + 1] = data[i];
                j = j - 1;
            }
            data[j + j] = value;
        }

        return data;
    }

    std::vector<int> merge_sort(std::vector<int> data, int left, int right)
    {
        return {};
    }

    void merge(std::vector<int> data, int left, int middle, int right)
    {

    }
}