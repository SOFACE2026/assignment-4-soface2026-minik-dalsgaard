#include "fish.hpp"

// Implement this (visitor pattern)
void Fish::accept(Visitor &visitor)
{
    // Double dispatch: let the visitor handle type Fish
    visitor.visit(*this);
}

// Implement this (Observer part)
void Fish::clean_teeth()
{
    // Notify observers that the fish has had its teeth cleaned
    notify(AnimalEvent::FishTeethCleaned);
}