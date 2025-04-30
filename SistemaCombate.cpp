#include <iostream>

using namespace std;


struct Personaje
{
	string nombre;
	int vida;
	int defensa;
	int ataque;

	int sistemaCombate(int vidaJugador, int vidaEnemigo){

        //Inicializamos el turno incial 
        bool esTurnoJugador = true;

        //Hacemos loop hasta que ambas vidas alcancen 0
        while (vidaJugador > 0 && vidaEnemigo > 0)
        {
            if (esTurnoJugador)
            }
                int danio = rand() % 10 +1;
                vidaEnemigo - = danio;
                cout << "Jugador ataca por " << danio << "damage. Vida enemigo: " << vidaEnemigo << endl;
                int damage = rand() % 10 + 1;  // Generate random damage between 1 and 10
                vidaJugador -= damage;
            cout << "Enemigo ataca por"  << danio << " danio. Vida jugador: " << vidaJugador << endl;
            }
            
        }
        




    }


} Personaje1, NPC;


int main() {

	srand(static_cast<unsigned>(time(nullptr)));  

	Personaje PapaNegro;
	Personaje1.nombre = "Papa Negro";
	Personaje1.vida = 100;
	Personaje1.defensa = rand() % 50 + 1;
	Personaje1.ataque = rand() % 40 +1;

	Personaje PapaBlanco;
	NPC.nombre = "Papa Blanco";
	NPC.vida = 100;
	NPC.defensa = rand() % 50 + 1;
	NPC.ataque = rand() % 40 + 1;

	// Mostrar la información del personaje y el NPC
	cout << "Personaje: " << endl;
	cout << "Nombre del personaje: " << Personaje1.nombre << endl;
	cout << "Vida del personaje: " << Personaje1.vida << endl;
	cout << "Defensa del personaje: " << Personaje1.defensa << endl;
	cout << "Ataque del personaje: " << Personaje1.ataque << endl;

	// Mostrar la información del NPC
	cout << endl; // Salto de línea para separar la información del personaje y el NPC
	cout << "NPC: " << endl;
	cout << "Nombre del NPC: " << NPC.nombre << endl;
	cout << "Vida del NPC: " << NPC.vida << endl;
	cout << "Defensa del NPC: " << NPC.defensa << endl;
	cout << "Ataque del NPC: " << NPC.ataque << endl;
	system("pause");
	system("cls");

	// Batalla
	
	if (Personaje1.vida > 0) {
		cout << "El personaje ataca al NPC." << endl;
		int danio = Personaje1.ataque - NPC.defensa;
		if (danio > 0) {
			NPC.vida -= danio;
			cout << "El NPC recibe " << danio << " puntos de daño." << endl;
		}
		else {
			cout << "El ataque no hace daño al NPC." << endl;
		}
	}
	else {
		cout << "El personaje ha sido derrotado." << endl;
	}

	
}