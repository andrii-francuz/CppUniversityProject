#include <iostream>

namespace ThiefsKnifes
{
	class Knife
	{
		int physicalDamage, poisonDamage, critChanse;
		float attackSpeed;
		std::string nameOfKnife = "Poison Knife";
	public:
		void poison_knife()
		{
			physicalDamage = 5;
			poisonDamage = 5;
			critChanse = rand() % 7 + 10;;
			attackSpeed = 1.3;
		}
		int get_a_physical_damage()
		{
			return physicalDamage;
		}
		int get_a_poison_damage()
		{
			return poisonDamage;
		}
		int get_a_crit_chanse()
		{
			return critChanse;
		}
		float get_a_attack_speed()
		{
			return attackSpeed;
		}
		std::string get_a_name_of_knife()
		{
			return nameOfKnife;
		}
		
	};
	class ShortSword
	{
		int physicalDamage, critChanse;
		float attackSpeed;
		std::string nameOfSword = "Short Sword";
	public:
		 void short_sword()
		{
			physicalDamage = 8;
			critChanse = rand() % 3 + 5;;
			attackSpeed = 1;
		}
		int get_a_physical_damage()
		{
			return physicalDamage;
		}
		int get_a_crit_chanse()
		{
			return critChanse;
		}
		float get_a_attack_speed()
		{
			return attackSpeed;
		}
		std::string get_a_name_of_sword()
		{
			return nameOfSword;
		}
		
	};
}