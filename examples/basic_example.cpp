#include <iostream>

#include "chronovault/timeline.hpp"

struct Player
{
    int health = 100;
    int level = 1;
};

int main()
{
    cv::Timeline<Player> timeline;

    Player player;
    timeline.capture(player);

    player.health = 50;
    timeline.capture(player);

    player.health = 10;
    timeline.capture(player);

    std::cout << "Frame 0 health: " << timeline.get(0).health << '\n';
    std::cout << "Frame 1 health: " << timeline.get(1).health << '\n';
    std::cout << "Frame 2 health: " << timeline.get(2).health << '\n';
    std::cout << "Latest health: " << timeline.current().health << '\n';
    std::cout << "Snapshot count: " << timeline.size() << '\n';

    return 0;
}
