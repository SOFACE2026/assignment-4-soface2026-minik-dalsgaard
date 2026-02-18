#include "monkey.hpp"

// Implement this (visitor pattern)
void Monkey::accept(Visitor &visitor)
{
    // Double dispatch: let the visitor handle type Monkey
    visitor.visit(*this);
}

// Implement this (Observer part)
void Monkey::feed_banana()
{
    // Notify observers that the monkey has been fed
    notify(AnimalEvent::MonkeyFed);
}