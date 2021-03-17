#include <iostream>
#include "../includes/Player.h"
#include "../includes/PlayGame.h"

int main() {
    std::string players_name{};
    std::cout << "Enter your name: ";
    std::cin >> players_name;

    Player player{ players_name };

    while (!player.isDead() and !player.hasWon()){
        fight(player);
    }

    if (player.hasWon()) {
        std::cout << "You won the game on " << player.getMLevel() << " level and with " << player.getGold()
                  << " gold.\n";
    } else {
        std::cout << "You lost the game on " << player.getMLevel() << " level and with " << player.getGold()
                  << " gold.\n";
    }
    return 0;
}
