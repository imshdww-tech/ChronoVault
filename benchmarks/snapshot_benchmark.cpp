#include <chrono>
#include <iostream>

#include "chronovault/timeline.hpp"

struct TestState
{
    int value;
};

int main()
{
    cv::Timeline<TestState> timeline;

    auto start =
        std::chrono::high_resolution_clock::now();

    for(int i=0;i<1000000;i++)
    {
        timeline.capture({i});
    }

    auto end =
        std::chrono::high_resolution_clock::now();

    std::cout
        << "Snapshots: "
        << timeline.size()
        << "\n";

    std::cout
        << "Elapsed ms: "
        << std::chrono::duration_cast<
            std::chrono::milliseconds
          >(end - start)
             .count()
        << "\n";
}
