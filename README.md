ChronoVault
Git for C++ runtime state.

ChronoVault is a modern C++20 library that allows applications to:

Capture snapshots
Rewind state
Branch timelines
Merge alternate futures
Query history
Replay simulations
Example
Player player;

timeline.capture(player);

player.health = 50;

timeline.capture(player);

auto old =
    timeline.get(0);

std::cout
    << old.health;
Output:

100

Features
✅ Snapshot Engine

✅ Branching Timelines

✅ Historical Queries

✅ Replay Engine

✅ Serialization

✅ Performance Benchmarks
