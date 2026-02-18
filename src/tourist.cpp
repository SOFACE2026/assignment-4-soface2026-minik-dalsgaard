#include "tourist.hpp"

// Implement this (visitor pattern)
void Tourist::visit(Monkey &monkey)
{
    // Store animal name
    visited.push_back("monkey");
}

// Implement this (visitor pattern)
void Tourist::visit(Tiger &tiger)
{
    // Store animal name
    visited.push_back("tiger");
}

// Implement this (visitor pattern)
void Tourist::visit(Fish &monkey)
{
    // Store animal name
    visited.push_back("fish");
}

std::vector<std::string> Tourist::list_visited()
{
    return visited;
}