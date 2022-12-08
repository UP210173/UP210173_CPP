/*
Fecha: 27/11/22
Autor: Morales Perez Cristian UP210173
Correo: up210173@alumnos.upa.edu.mx
Descripcion: Juego del Gato
*/
#include <iostream>

using namespace std;

char board[3][3] = {{'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'}}; // Declaracion del tablero mediante matriz

void tablero(); // El tablero de juego, definido como una matriz.
bool setMarker(int slot); // Funcion que indica el número de la casilla que ocupará la marca, para ponerla en el tablero de juego.
char marcador; //Es la marca o símbolo que se colocará y mostrará en el tablero, según lo que el usuario haya elegido e ingresado.
int jugador;  
string jugador1;
string jugador2;
int ganador(); // Se determina el ganador del juego entre los participantes.
void juego(); // Dentro del juego se identifica de la jugada que harán los usuarios.
void swap_player_and_marker(); //Indicar al usuario despues de la jugada que debe ceder su turno al usuario cuando sea el momento.
int ganador(); // Se determina el ganador del juego entre los participantes.
int main()
{

    system("cls"); // Limpia la pantalla
    cout << "** CATS GAME ** \n";

    cout << "Nombre Jugador 1:\n";
    cin >> jugador1;

    cout << "Nombre Jugador :\n";
    cin >> jugador2;
    tablero();
    system("cls");
    juego();
   
    return 0;
}

void tablero() //Funcion procedimiento para el tablero 
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "-----------\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "-----------\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool setMarker(int slot)// Funcion para las estructura booleana para las filas y columnas
{
    int row;
    int col;
    if (slot == 1)
    {
        row = 0;
        col = 0;
    }
    if (slot == 2)
    {
        row = 0;
        col = 1;
    }
    if (slot == 3)
    {
        row = 0;
        col = 2;
    }
    if (slot == 4)
    {
        row = 1;
        col = 0;
    }
    if (slot == 5)
    {
        row = 1;
        col = 1;
    }
    if (slot == 6)
    {
        row = 1;
        col = 2;
    }
    if (slot == 7)
    {
        row = 2;
        col = 0;
    }
    if (slot == 8)
    {
        row = 2;
        col = 1;
    }
    if (slot == 9)
    {
        row = 2;
        col = 2;
    }
    if (board[row][col] != 'x' && board[row][col] != 'o')
    {
        board[row][col] = marcador;
        return true;
    }
    else
        return false;
}

int ganador() // En esta función determina el ganador
{
    for (int i = 0; i < 3; i++)
    {
        // rows
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return jugador;
        }
        // columns
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return jugador;
        }
        // diagonals
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            return jugador;
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            return jugador;
        }
    }
    return 0;
}

void juego() // Estructura de procedimiento para jugar
{
    char marker_player; // Es el símbolo del juego en el tablero que identifica al jugador en él.
    int slot; // Es el espacio en el tablero de juego a ser ocupado.
    int player_winner; // Jufador que es el ganador de la partida
    cout << "Jugador 1 escoge tu simbolo (x / o )\n";
    cin >> marker_player;

    jugador = 1;
    marcador = marker_player;
    tablero();
    system("cls");
        // i = localizar las marcas en el tablero.
    for (int i = 0; i < 9; i++)
    {
        cout << "Jugador " << jugador << " escoge tu casilla entre el 1 y 9 \n";
        cin >> slot;
        if (slot < 1 || slot > 9)
        {
            cout << "El espacio no es valido. \n prueba otro\n";
            i--;
            continue;
        }
        if (!setMarker(slot))
        {
            cout << "El espacio esta ocupado.\n elige otro espacio\n";
            i--;
            continue;
        }
        system("cls");
        cout << "***** GATO GAMEE ***** \n";
        tablero();
        player_winner = ganador();
        if (player_winner == 1)
        {
            cout << "Felicidades! " << jugador1 << "  eres el ganador \n";
            break;
        }
        if (player_winner == 2)
        {
            cout << "Felicidades! " << jugador2 << " eres el ganador \n";
            break;
        }
        swap_player_and_marker();
    }
    if (player_winner == 0)
    {
        cout << "Empate\n";
    }
}

void swap_player_and_marker() // Esta funcion indica el procedimiento del simbolo que usara cada jugador
{
    if (marcador == 'x')
    {
        marcador = 'o';
    }
    else
        marcador = 'x';
    if (jugador == 1)
    {
        jugador = 2;
    }
    else
        jugador = 1;
}

