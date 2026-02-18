#include "animal_rights_group.hpp"

AnimalRightsGroup::AnimalRightsGroup(int n_monkeys, int n_tigers, int n_fish)
    : n_monkeys(n_monkeys), n_tigers(n_tigers), n_fish(n_fish),
      n_monkeys_fed(0), n_tigers_scratched(0), n_fish_teeth_brushed(0)
{
}

// Implement this (Observer part)
void AnimalRightsGroup::update(AnimalEvent event)
{
    if (event == AnimalEvent::MonkeyFed)
    {
        // Add case +1 case of fed monkey
        n_monkeys_fed++;
    }
    else if (event == AnimalEvent::TigerScratched)
    {
        // Add case +1 case of tiger scratched
        n_tigers_scratched++;
    }
    else if (event == AnimalEvent::FishTeethCleaned)
    {
        // Add case +1 case of fish cleaned
        n_fish_teeth_brushed++;
    }
}

bool AnimalRightsGroup::animals_ok()
{
    // do not modify
    return (n_monkeys == n_monkeys_fed && n_tigers == n_tigers_scratched && n_fish == n_fish_teeth_brushed);
}