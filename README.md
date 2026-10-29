# ChronoVault

ChronoVault is a small C++20 library for capturing deterministic runtime state snapshots and later querying historical versions.

It gives you a minimal timeline API that stores snapshots, rewinds to a previous frame, and supports simple historical inspection.

## Example

```cpp
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

    std::cout << timeline.get(0).health << '\n';
    std::cout << timeline.get(1).health << '\n';
    std::cout << timeline.get(2).health << '\n';

    std::cout << "Latest health: " << timeline.current().health << '\n';
    std::cout << "Snapshot count: " << timeline.size() << '\n';
}
```

## Build

```bash
cmake -S . -B build
cmake --build build
./build/basic_example
```

## Features

- Snapshot-based state capture
- Rewindable time-travel queries
- Safe range checking for historical access
- CMake-based build setup
- Header-first C++20 API
