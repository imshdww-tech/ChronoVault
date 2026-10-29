#pragma once

#include <vector>
#include <stdexcept>
#include "snapshot.hpp"

namespace cv
{
    template<typename T>
    class Timeline
    {
    public:

        void capture(const T& state);

        T get(size_t frame) const;

        size_t size() const;

    private:

        size_t currentFrame = 0;

        std::vector<Snapshot<T>> history;
    };
}

#include "../../src/timeline.inl"
