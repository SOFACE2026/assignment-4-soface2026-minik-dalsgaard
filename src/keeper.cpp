#include "keeper.hpp"
#include "monkey.hpp"
#include "tiger.hpp"
#include "fish.hpp"

// Implement this (visitor part)
void Keeper::visit(Monkey &monkey)
{
    // Keeper feeds monkey
    monkey.feed_banana();
}

// Implement this (visitor part)
void Keeper::visit(Tiger &tiger)
{
    // Keeper scratches tiger
    tiger.scratch_back();
}

// Implement this (visitor part)
void Keeper::visit(Fish &fish)
{
    // Keeper cleans fish
    fish.clean_teeth();
}