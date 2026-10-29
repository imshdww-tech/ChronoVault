#pragma once

#include <iostream>

namespace cv
{
    class HistoryGraph
    {
    public:

        static void print()
        {
            std::cout
                << "main\n"
                << " |\n"
                << " +-- frame0\n"
                << " +-- frame1\n";
        }
    };
}
