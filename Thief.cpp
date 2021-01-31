#include <iostream>

namespace TypeOfClassThief
{
    class Thief
    {
        int health, mana, stamina;
    public:
        void create_Character()
        {
            health = rand() % 10 + 40;
            mana = rand() % 10 + 5;
            stamina = rand() % 40 + 30;
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


