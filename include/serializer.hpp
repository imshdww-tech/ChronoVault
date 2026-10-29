#pragma once

#include <fstream>

namespace cv
{
    class Serializer
    {
    public:

        template<typename T>
        static void save(
            const T&,
            const std::string&
        )
        {
        }

        template<typename T>
        static void load(
            T&,
            const std::string&
        )
        {
        }
    };
}
