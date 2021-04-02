#pragma once
#define sorts

#include <vector>

namespace sort
{
    std::vector<int> insertion_sort(std::vector<int> data)
    {
        for (int i = 1; i < data.size(); ++i)
        {
            int value = data[i];
            auto j = i - 1;
            while (j >= 0 && data[j] > value)
            {
                data[j + 1] = data[j];
                j = j - 1;
            }
            data[j + 1] = value;
        }

        return data;
    }

    
    std::vector<int> merge(std::vector<int> data, int left, int mid, int right)
    {
        int n1 = mid - left + 1;
        int n2 = right - mid;
    
        // Create temp arrays
        std::vector<int> left_v, right_v;
    
        // Copy data to temp arrays left_v[] and right_v[]
        for (int i = 0; i < n1; i++)
            left_v[i] = data[left + i];
        for (int j = 0; j < n2; j++)
            right_v[j] = data[mid + 1 + j];
    
        // Merge the temp arrays back into data[left..right]
    
        // Initial index of first subarray
        int i = 0;
    
        // Initial index of second subarray
        int j = 0;
    
        // Initial index of merged subarray
        int k = left;
    
        while (i < n1 && j < n2) {
            if (left_v[i] <= right_v[j]) {
                data[k] = left_v[i];
                i++;
            }
            else {
                data[k] = right_v[j];
                j++;
            }
            k++;
        }
    
        // Copy the remaining elements of
        // left_v[], if there are any
        while (i < n1) {
            data[k] = left_v[i];
            i++;
            k++;
        }
    
        // Copy the remaining elements of
        // right_v[], if there are any
        while (j < n2) {
            data[k] = right_v[j];
            j++;
            k++;
        }

        return data;
    }

    std::vector<int> merge_sort(std::vector<int> data, int left, int right)
    {
        if (left >= right)
        {
            return data;
        }

        int mid = left + (right - 1) /2;
        merge_sort(data, left, mid);
        merge_sort(data, mid + 1, right);
        merge(data, left, mid, right);
        return data;
    }
}