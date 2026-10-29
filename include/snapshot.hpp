#pragma once

namespace cv
{
    template<typename T>
    struct Snapshot
    {
        size_t frame;
        T state;
    };
}
