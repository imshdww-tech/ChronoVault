#pragma once

#include <cstddef>
#include <stdexcept>
#include <vector>

#include "chronovault/snapshot.hpp"

namespace cv
{
    template<typename T>
    class Timeline
    {
    public:
        using value_type = T;

        void capture(const T& state)
        {
            history_.push_back({ current_frame_++, state });
        }

        T get(std::size_t frame) const
        {
            if (frame >= history_.size())
            {
                throw std::out_of_range("Timeline::get: frame index out of range");
            }

            return history_.at(frame).state;
        }

        const T& current() const
        {
            if (history_.empty())
            {
                throw std::out_of_range("Timeline::current: no snapshots available");
            }

            return history_.back().state;
        }

        std::size_t size() const noexcept
        {
            return history_.size();
        }

        bool empty() const noexcept
        {
            return history_.empty();
        }

        void clear() noexcept
        {
            history_.clear();
            current_frame_ = 0;
        }

    private:
        std::size_t current_frame_ = 0;
        std::vector<Snapshot<T>> history_;
    };
}
