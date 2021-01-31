#include <iostream>

namespace TypeOfClassWarrior
{
    class Warrior
    {
        int health, mana, stamina;
    public:
        void create_Character()
        {
            health = rand() % 20 + 60;
            mana = 0;
            stamina = rand() % 20 + 30;
        }

        int get_a_health()
        {
            return health;
        }

        int get_a_mana()
        {
            return mana;
        }

        int get_a_stamina()
        {
            return stamina;
        }
    };
}

