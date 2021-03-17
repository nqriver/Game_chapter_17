#include <iostream>
#include "../includes/PlayGame.h"

void monstersAttack(Player &player, Monster &monster) {
    if (monster.isDead()) {
        return;
    }
    player.reduceHealth(monster.getAttack());
    std::cout << "Monster: " << monster.getName() << " hits you for " << monster.getAttack() << " points" << std::endl;

}

void playersAttack(Player &player, Monster &monster) {
    if (player.isDead()){
        return;
    }
    std::cout <<"You hit monster: " << monster.getName() << " for " << player.getAttack() << " points" << std::endl;
    monster.reduceHealth(player.getAttack());
    if (monster.isDead()){
        player.levelUp();
        player.addGold(monster.getGold());
        std::cout << "Monster: " << monster.getName() << " is dead now. You are now on level: " << player.getMLevel()
                  << " found " << monster.getGold() <<" extra gold." << std::endl;
    }
}

void fight(Player &player) {        ///single fight between Player and one Monster

    Monster monster{ Monster::getRandomMonster() };
    std::cout << "Your encountered monster: " << monster.getName() << " (" << monster.getHealth() << ")\n";
    while (!player.isDead() and !monster.isDead()){
        std::cout << "(R)un or (F)ight? ";
        char choice{};
        std::cin >> choice;
        if (choice == 'R' or choice == 'r'){
            if (getRandomNumber(1,2) == 1){
                std::cout << " You successfully fled" << std::endl;
                return;
            }
            else{
                std::cout << "You failed to flee"<<std::endl;
                monstersAttack(player, monster);
            }
        }
        else if (choice == 'F' or choice == 'f'){
            playersAttack(player, monster);
            monstersAttack(player, monster);
        }
    }
}
