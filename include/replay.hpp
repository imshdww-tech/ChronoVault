#pragma once

namespace cv
{
    class ReplayEngine
    {
    public:

        template<typename Fn>
        void replay(
            size_t begin,
            size_t end,
            Fn visitor
        )
        {
            for(size_t i=begin;i<end;i++)
            {
                visitor(i);
            }
        }
    };
}
