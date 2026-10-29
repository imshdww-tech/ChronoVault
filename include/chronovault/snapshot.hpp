#pragma once

#include <cstddef>

namespace cv
{
    template<typename T>
    struct Snapshot
    {
        std::size_t frame = 0;
        T state{};
    };
}
