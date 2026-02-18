#include "subject.hpp"
#include <algorithm>

// Implement this (Observer part)
void Subject::attach(Observer *subscriber)
{
    // Add to subscribers list
    subscribers.push_back(subscriber);
}

// Implement this (Observer part)
void Subject::detach(Observer *subscriber)
{
    // Remove from subscribers list
    subscribers.erase(
        std::remove(subscribers.begin(), subscribers.end(), subscriber), subscribers.end());
}

// Implement this (Observer part)
void Subject::notify(AnimalEvent event)
{
    // Notify all subscribers about event
    for (auto s : subscribers){
        s->update(event);
    }
}