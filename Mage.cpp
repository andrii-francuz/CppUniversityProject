#include <iostream>

namespace TypeOfClassMage
{
    class Mage
    {
        int health, mana, stamina;
    public:
        void create_Character()
        {
            health = rand() % 40 + 30;
            mana = rand() % 80 + 60;
            stamina = rand() % 30 + 10;
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


