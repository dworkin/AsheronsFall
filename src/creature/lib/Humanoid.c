# include "Creature.h"

inherit Creature;

/*
 * a humanoid who can wear clothes, wield weapons, cast spells
 */


static void create(int class, string name, int *attributes, int *skills)
{
    ::create(class, name, attributes, skills);
}
