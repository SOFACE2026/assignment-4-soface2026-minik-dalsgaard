#include "tiger.hpp"

// Implement this (visitor pattern)
void Tiger::accept(Visitor &visitor)
{
    // Double dispatch: let the visitor handle this concrete animal
    visitor.visit(*this);
}

// Implement this (Observer part)
void Tiger::scratch_back()
{
    // Notify observers that the tiger has been scratched
    notify(AnimalEvent::TigerScratched);
}