#pragma once
#define sorts

#include <vector>

namespace sort
{
    std::vector<int> insertion_sort(std::vector<int> data)
    {
        for (int j = 1; j < data.size(); ++j)
        {
            int value = data[j];
            auto i = j - 1;
            while (i >= 0 && data[i] > value)
            {
                data[i + 1] = data[i];
                i = i - 1;
            }
            data[i + 1] = value;
        }

        return data;
    }
}