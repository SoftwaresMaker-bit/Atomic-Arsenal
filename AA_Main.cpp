#include<iostream>
#include <string>
#include <vector>
using namespace std;


#include "GameMaster.cpp"

GameMaster GM(1); //Creamos al Game_Master. Se crean Player y Enemy con valores default 0.
Player& player_1 = GM.get_player();
Enemy& enemy_1 = GM.get_enemy();
Ion_Enemy& ion_enemy_1 = GM.get_ion_enemy();




void Get_weapons_info(){
		cout << "weapon 1: "<< player_1.get_weapon(0).get_info() << endl;
		cout << "Weapon 2: "<<player_1.get_weapon(1).get_info() << endl;
		cout << "Weapon 3: "<<player_1.get_ion_weapon(0).get_info() << endl;
// Function for printing all the weapon info 
}

int Option_weapon(int num){
	if(num == 1){
		num = 0;
	}

	else if(num == 2){
		num = 1;
	}

	else if(num == 3){
		num = 0;
	}

	return num;
}
// function for adjusting the user weapon decision to the index of the vectors.


void menu(){
    cout << "Hello player, welcome to ¡Atomic Arsenal!" << endl;
    cout << " 1. play" << endl;
    cout << " 2. exit" << endl;
}

int main(){

    
    while(true){
    menu();
    int select;

    while (true){
    cin >> select;
    if (select == 1 || select == 2){
        break;
    }
    else{
        cout << "Selection not available, try again"<< endl;
        menu();
    }


                }
    if(select==1){


	int level;

	string name;
	cout << "Input your name" << endl;
	cin >> name;

	cout << "Which level you want to play 1 or 2"<< endl;
	cin >> level;
	//Setting player and enemy through GM methods.
	GM.set_player(name,200);
	GM.set_enemy("Oil Monster",200,50,"DI");
	GM.set_ion_enemy("Cation_Lion",300,25,"ION",1);

	

	//Create Weapons and add them into the player Inventory
	Weapon w1("Water_gun",25,"DIP");
	player_1.add_weapon(w1);
	Weapon w2("Oil_luncher", 20,"DI");
	player_1.add_weapon(w2);

	Ion_Weapon ion_1("Cation_gun",30,"ION",1);
	player_1.add_ion_weapon(ion_1);

	

// Start Battle

bool is_player_turn = true; // Controla el turno: true = jugador, false = enemigo

// Level 1
if(level == 1){
while (true) { // Ciclo de batalla
    // Imprimir información del jugador y enemigo
    cout << "\n" << player_1.get_name() << " has " << player_1.get_hp() << " Health points.\n";
    cout << enemy_1.get_info() << endl;

    // Turno del jugador
    if (is_player_turn) {
        cout << "\n Player's turn!" << endl;
        Get_weapons_info();
        cout << "¡Attack time! Which weapon do you want to use?" << endl;

        int option;
        while (true) {
            cin >> option;
            if (option > 0 && option <= 3) {
                break; // Entrada válida
            } else {
                cout << "That option is not valid. Try again!" << endl;
            }
        }

        int type = (option == 3) ? 1 : 0; // Determinar tipo de arma
        option = Option_weapon(option); // Ajustar índice del arma
        cout << GM.Attack_P2E(option, type,level) << endl;

        // Verificar si el enemigo fue derrotado
        if (enemy_1.get_hp() <= 0) {
            cout << "¡You won! You defeated your enemy!" << endl;
            break; // Salir del ciclo
        }
    }

    // Turno del enemigo
    else {
        cout << "\n Enemy's turn!" << endl;
        cout << GM.Attack_E2P(level) << endl;

        // Verificar si el jugador fue derrotado
        if (player_1.get_hp() <= 0) {
            cout << "¡You Lose! Your enemy defeated you!" << endl;
            break; // Salir del ciclo
        }
    }

    // Alternar turno
    is_player_turn = !is_player_turn;
    
}
	}




// Level 2
else if(level == 2){
while (true) { // Ciclo de batalla
    // Imprimir información del jugador y enemigo
    cout << "\n" << player_1.get_name() << " has " << player_1.get_hp() << " Health points.\n";
    cout << ion_enemy_1.get_info() << endl;

    // Turno del jugador
    if (is_player_turn) {
        cout << "\n Player's turn!" << endl;
        Get_weapons_info();
        cout << "¡Attack time! Which weapon do you want to use?" << endl;

        int option;
        while (true) {
            cin >> option;
            if (option > 0 && option <= 3) {
                break; // Entrada válida
            } else {
                cout << "That option is not valid. Try again!" << endl;
            }
        }

        int type = (option == 3) ? 1 : 0; // Determinar tipo de arma
        option = Option_weapon(option); // Ajustar índice del arma
        cout << GM.Attack_P2E(option, type, level) << endl;

        // Verificar si el enemigo fue derrotado
        if (ion_enemy_1.get_hp() <= 0) {
            cout << "¡You won! You defeated an ion enemy!" << endl;
            break; // Salir del ciclo
        }
    }

    // Turno del enemigo
    else {
        cout << "\n Enemy's turn!" << endl;
        cout << GM.Attack_E2P(level) << endl;

        // Verificar si el jugador fue derrotado
        if (player_1.get_hp() <= 0) {
            cout << "¡You Lose! Your enemy defeated you!" << endl;
            break; // Salir del ciclo
        }
    }

    // Alternar turno
    is_player_turn = !is_player_turn;
    
}
	}
} // if play parenthesis

else{
    cout << "Ending...." << endl;
    break;
}

} // Game While parenthesis 











	return 0;
};