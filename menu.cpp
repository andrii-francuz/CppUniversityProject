#include <iostream>

#include "Warrior.cpp"
#include "Mage.cpp"
#include "Thief.cpp"
#include "Sword.cpp"
#include "Manuscript.cpp"
#include "Knife.cpp"

void characterChooser(std::string);

void gaming_interface()
{
    std::string name;


    std::cout << "Choose your name" << std::endl;
    std::cin >> name;

    std::cout << "Choose your class." << std::endl;
    std::cout << "1. Warrior; 2. Mage; 3. Thief " << std::endl;

    characterChooser(name);

}

void characterChooser(std::string name)
{
    int classname;

    std::cin >> classname;

    if (classname == 1)
    {
        std::cout << "\n" << std::endl;

        std::cout << "Your name: " << name << std::endl;

        std::cout << std::endl;

        TypeOfClassWarrior::Warrior user;
        user.create_Character();

        AdventureSword::Sword weapon;
        weapon.damage();

        AdventureSword::Shield defense_for_traveler;
        defense_for_traveler.defense();

        std::cout << "Your stats: " << std::endl;
        std::cout << "  Health: " << user.get_a_health() << std::endl;
        std::cout << "  Mana: " << user.get_a_mana() << std::endl;
        std::cout << "  Stamina: " << user.get_a_stamina() << std::endl;

        std::cout << std::endl;

        std::cout << "Your weapon: " << weapon.get_a_name_of_weapon() << std::endl;
        std::cout << "  Damage: " << weapon.get_a_damage() << std::endl;
        std::cout << "  Crit Chanse: " << weapon.get_a_crit() << std::endl;
        std::cout << "  Attack Speed: " << weapon.get_a_speed() << std::endl;

        std::cout << std::endl;

        std::cout << "Your weapon: " << defense_for_traveler.get_a_name_of_non_weapon() << std::endl;
        std::cout << "  Physical Defense: " << defense_for_traveler.get_a_physicalDefense() << std::endl;
        std::cout << "  Magic Defense: " << defense_for_traveler.get_a_magicDefense() << std::endl;

    } else if (classname == 2)
    {
        std::cout << "\n" << std::endl;

        std::cout << "Your name: " << name << std::endl;

        std::cout << std::endl;

        TypeOfClassMage::Mage user;
        user.create_Character();

        MagicManuscript::Manuscript book;
        book.damage();

        MagicManuscript::Staff stick;
        stick.staff_damage();

        std::cout << "Your stats: " << std::endl;
        std::cout << "  Health: " << user.get_a_health() << std::endl;
        std::cout << "  Mana: " << user.get_a_mana() << std::endl;
        std::cout << "  Stamina: " << user.get_a_stamina() << std::endl;

        std::cout << std::endl;

        std::cout << "Your weapon: " << book.get_a_name_of_manuscript() << std::endl;
        std::cout << "  Damage: " << book.get_a_magic_damage() << std::endl;
        std::cout << "  Magic Defense: " << book.get_a_magic_defense() << std::endl;
        std::cout << "  Poison Defense: " << book.get_a_poison_defense() << std::endl;

        std::cout << std::endl;

        std::cout << "Your weapon: " << stick.get_a_name_of_staff() << std::endl;
        std::cout << "  Damage: " << stick.get_a_physical_damage() << std::endl;
        std::cout << "  Spell Damage: " << stick.get_a_spell_damage() << std::endl;
        std::cout << "  Magic Damage: " << stick.get_a_magic_damage() << std::endl;

    } else if (classname == 3)
    {
        std::cout << "\n" << std::endl;

        std::cout << "Your name: " << name << std::endl;

        std::cout << std::endl;

        TypeOfClassThief::Thief user;
        user.create_Character();

        ThiefsKnifes::Knife poison;
        poison.poison_knife();

        ThiefsKnifes::ShortSword sword;
        sword.short_sword();

        std::cout << "Your stats: " << std::endl;
        std::cout << "  Health: " << user.get_a_health() << std::endl;
        std::cout << "  Mana: " << user.get_a_mana() << std::endl;
        std::cout << "  Stamina: " << user.get_a_stamina() << std::endl;

        std::cout << std::endl;

        std::cout << "Your weapon: " << poison.get_a_name_of_knife() << std::endl;
        std::cout << "  Damage: " << poison.get_a_physical_damage() << std::endl;
        std::cout << "  Poison Damage: " << poison.get_a_poison_damage() << std::endl;
        std::cout << "  Crit Chanse: " << poison.get_a_crit_chanse() << std::endl;
        std::cout << "  Attack Speed: " << poison.get_a_attack_speed() << std::endl;

        std::cout << std::endl;

        std::cout << "Your weapon: " << sword.get_a_name_of_sword() << std::endl;
        std::cout << "  Damage: " << sword.get_a_physical_damage() << std::endl;
        std::cout << "  Crit Chanse: " << sword.get_a_crit_chanse() << std::endl;
        std::cout << "  Attack Speed: " << sword.get_a_attack_speed() << std::endl;
    } else
        {
            std::cout << "You need to choose something" << std::endl;
            characterChooser(name);
        }
}

