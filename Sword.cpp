#include <iostream>

namespace AdventureSword
{
	class Sword
	{
		int physicalDamage, critChanse;
		float attackSpeed;
		std::string weaponName = "Sword";
	public:
		void damage()
		{
			physicalDamage = 10;
			critChanse = rand() % 3 + 5;
			attackSpeed = 0.76;
		}
		int get_a_damage()
		{
			return physicalDamage;
		}
		int get_a_crit()
		{
			return critChanse;
		}
		float get_a_speed()
		{
			return attackSpeed;
		}
		std::string get_a_name_of_weapon()
		{
			return weaponName;
		}
	};
	class Shield
	{
		int physicalDefense, magicDefense;
		std::string nonWeaponName = "Typical Shield";
	public:
		void defense()
		{
			physicalDefense = 15;
			magicDefense = 1;
		}
		int get_a_physicalDefense()
		{
			return physicalDefense;
		}
		int get_a_magicDefense()
		{
			return magicDefense;
		}
		std::string get_a_name_of_non_weapon()
		{
			return nonWeaponName;
		}
	};
};