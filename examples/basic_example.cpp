#include <iostream>

#include "chronovault/timeline.hpp"

struct Player
{
    int health = 100;

    float x = 0.0f;

    float y = 0.0f;
};

int main()
{
    cv::Timeline<Player> timeline;

    Player p;

    timeline.capture(p);

    p.health = 50;

    timeline.capture(p);

    p.health = 20;

    timeline.capture(p);

    std::cout
        << timeline.get(0).health
        << "\n";

    std::cout
        << timeline.get(1).health
        << "\n";

    std::cout
        << timeline.get(2).health
        << "\n";
}
