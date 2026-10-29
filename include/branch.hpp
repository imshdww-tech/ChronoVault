#pragma once

#include <string>
#include <vector>

namespace cv
{
    template<typename T>
    struct Branch
    {
        std::string name;

        std::vector<T> history;
    };
}
