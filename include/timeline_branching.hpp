#pragma once

#include <unordered_map>
#include <string>
#include "branch.hpp"

namespace cv
{
    template<typename T>
    class TimelineBranching
    {
    public:

        void createBranch(
            const std::string& name
        )
        {
            branches[name] =
                Branch<T>{name};
        }

    private:

        std::unordered_map<
            std::string,
            Branch<T>
        > branches;
    };
}
