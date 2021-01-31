#include <iostream>

namespace MagicManuscript
{
	class Manuscript
	{
		int magicDamage, magicDefense, poisonDefense, spellDamage;
		std::string manuscriptName = "Manuscript lvl.1";
	public:
		void damage()
		{
			magicDamage = 15;
			magicDefense = 8;
			poisonDefense = 1;
		}
		int get_a_magic_damage()
		{
			return magicDamage;
		}
		int get_a_magic_defense()
		{
			return magicDefense;
		}
		int get_a_poison_defense()
		{
			return poisonDefense;
		}
		std::string get_a_name_of_manuscript()
		{
			return manuscriptName;
		};
		
	};
	class Staff
	{
		int physicalDamage, spellDamage, magicDamage;
		std::string staffName = "Wood Staff";
	public:
		void staff_damage()
		{
			physicalDamage = 3;
			spellDamage = 7;
			magicDamage = 3;
		}
		int get_a_physical_damage()
		{
			return physicalDamage;
		}
		int get_a_spell_damage()
		{
			return spellDamage;
		}
		int get_a_magic_damage()
		{
			return magicDamage;
		}
		std::string get_a_name_of_staff()
		{
			return staffName;
		}
	};
}