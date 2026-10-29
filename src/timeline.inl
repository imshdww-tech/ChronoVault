#pragma once

namespace cv
{
    template<typename T>
    void Timeline<T>::capture(const T& state)
    {
        history.push_back(
            {
                currentFrame++,
                state
            }
        );
    }

    template<typename T>
    T Timeline<T>::get(
        size_t frame
    ) const
    {
        return history.at(frame).state;
    }

    template<typename T>
    size_t Timeline<T>::size() const
    {
        return history.size();
    }
}
