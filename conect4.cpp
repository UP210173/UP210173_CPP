#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// PROTOTYPES FUNCTION
void heading_game();
void validate_move();
void show_board();
void apply_move();
void determine_winner();
void show_result();
int computer_move();

// BOARD
char board[7][7] = {
    {'1', '2', '3', '4', '5', '6', '7'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
};

// VARIABLES TO PLAY
char start;
char player1[20];
char player2[20];
int type_of_game;
int turn = 1;
char computer[] = "COMPUTADORA";
int movePl = 0;
int player_winner = 0;
int quantity_moves = 0;
bool winner = false;

int main () {
	
	srand(time(NULL));
	heading_game();
	
	cout<<"Iniciar juego [S] / [N]: ";
	cin>>start;
	
	if ( start == 'S' || start == 's' ) {
		
		cout<<"\n[1] JUGAR DOS JUGADORES";
		cout<<"\n[2] JUGAR CONTRA COMPUTADORA";
		cout<<"\n\nDecision: ";
		cin>>type_of_game;	
		
		if ( type_of_game == 1 ) { // JUGADOR1 VS JUGADOR2
			
			cout<<"\nIngrese nombre del jugador [1]: ";
			cin>>player1;
					
			cout<<"Ingrese nombre del jugador [2]: ";
			cin>>player2;
					
			do {
				validate_move();
				apply_move();	
				determine_winner();
				quantity_moves++;
				
				if ( quantity_moves == 49 ) break;
				
				turn == 1 ? turn = 2 : turn = 1;
			} while( !winner );
			
		} else { // JUGADOR VS COMPUTADORA	
			cout<<"\nIngrese nombre de jugador: ";
			cin>>player1;
			
			do {		
					
				if ( turn == 1 ) 
					validate_move();					
				else 
					movePl = computer_move();
				
				apply_move();	
				determine_winner();			
				
				quantity_moves++;
				
				if ( quantity_moves == 49 ) break;
					
				turn == 1 ? turn = 3 : turn = 1;
						
			} while( !winner );
		}
		
		show_result();	
		
	} else {
		system("cls");
		system("Color 60");
		cout<<"JUEGO TERMINADO."<<endl;
	}
		
	return 0;
}

void show_board() {
	system("cls");
	cout<<"============= TABLERO DE JUEGO =============\n"<<endl;
	cout<<"Este es el tablero de juego para colocar tus movimientos.\n\n";
	cout<<"ELIGE UNA COLUMNA.\n\n";
	
	for( int i = 0; i <= 6; i++ ) {
		
		if ( i == 0 ) {
			cout<<"\t";
			for( int k = 1; k <= 43; k++ ) {
				if( k == 1 || k == 43 ) {
					cout<<"*";
				} else {
					cout<<"-";		
				}
			}
			cout<<"\n";
		}
		
		
		cout<<"\t";
		for ( int j = 0; j <= 6; j++ ) {
			if ( j == 0 ) {
				cout<<"|";
			}
					
			if ( board[i][j] == 'X' ) {
				cout<<"  "<<"\033[1;32m"<<board[i][j]<<"\033[0m"<<"  |";
			} else if ( board[i][j] == 'O' ) {
				
				if ( type_of_game == 1 ) {
					cout<<"  "<<"\033[0;35m"<<board[i][j]<<"\033[0m"<<"  |";
				} else {
					cout<<"  "<<"\033[0;34m"<<board[i][j]<<"\033[0m"<<"  |";	
				}
				
			} 
			else {
				cout<<"  "<<board[i][j]<<"  |";
			}				
		}
				
		cout<<"\n";
		cout<<"\t";
		for( int k = 1; k <= 43; k++ ) {
			if( k == 1 || k == 43 ) {
				cout<<"*";
			} else {
				cout<<"-";		
			}
		}
		cout<<"\n";
	}
			
	cout<<"\n";
}

void validate_move () {
	
	do {
		show_board();	
		
		if ( turn == 1 ) {
			cout<<"\nTurno de "<<"\033[1;32m"<<player1<<"\033[0m"<<": ";
		} else if ( turn == 2 ) {
			cout<<"\nTurno de "<<"\033[0;35m"<<player2<<"\033[0m"<<": ";
		} else {
			cout<<"\nTurno de "<<"\033[0;34m"<<computer<<"\033[0m"<<": ";
		}
		
		cin>>movePl;
		
	} while ( movePl < 1 || movePl > 7 || board[0][movePl - 1] == 'X' || board[0][movePl - 1] == 'O' );
						
}

void apply_move() {
	
	for ( int i = 6; i >= 0; i-- ) {
		if ( board[i][movePl - 1] != 'X' &&  board[i][movePl - 1] != 'O' ) {
			if ( turn == 1 ){
				board[i][movePl - 1] = 'X';
			} else {
				board[i][movePl - 1] = 'O';
			}
			
			break;
		}
	}
	
	show_board();
}

void determine_winner() {
	
	// WINNER BY COLUMN
	for (int i = 0; i < 7; i++) {
        for (int j = 6; j >= 3; j--) {

          if (
            board[j][i] == 'X' ||
            board[j][i] == 'O'
          ) {
            if (
              board[j][i] == 'X' &&
              board[j-1][i] == 'X' &&
              board[j-2][i] == 'X' &&
              board[j-3][i] == 'X'
            ) {
              player_winner = 1;
              winner = true;
              break;
            }

            if (
              board[j][i] == 'O' &&
              board[j-1][i] == 'O' &&
              board[j-2][i] == 'O' &&
              board[j-3][i] == 'O'
            ) {
              player_winner = 2;
              winner = true;
              break;
            }
          } else {
            break;
          }
        }
    }	
    
	// WINNER BY ROW
    for (int j = 6; j >= 0; j--) {
        for (int i = 0; i <= 3; i++) {
          if (
            board[j][i] == 'X' &&
            board[j][i+1] == 'X' &&
            board[j][i+2] == 'X' &&
            board[j][i+3] == 'X'
          ) {
            player_winner = 1;
            winner = true;
            break;
          }

          if (
           	board[j][i] == 'O' &&
            board[j][i+1] == 'O' &&
            board[j][i+2] == 'O' &&
            board[j][i+3] == 'O'
          ) {
            player_winner = 2;
            winner = true;
            break;
          }
        }
    }
    
	// WINNER BY DIAGONALS
    for (int k = 7; k <= 13; k++) {
        
        int z = k - 6;
        
        if (k >= 10) z = 14 - k;

        // WINNER BY DIAGONAL LEFT-RIGHT
    	for (int i = 0; i < z; i++) {

          int x = 4 - (z - i);

	          if ( k < 11 ) {
	
	            if ( 
	              board[i][x] == 'X' &&
	              board[i + 1][x + 1] == 'X' &&
	              board[i + 2][x + 2] == 'X' &&
	              board[i + 3][x + 3] == 'X' 
	            ) {
	            	player_winner = 1;
		          	winner = true;
		            break;
	            }
	
	            if ( 
	              board[i][x] == 'O' &&
	              board[i + 1][x + 1] == 'O' &&
	              board[i + 2][x + 2] == 'O' &&
	              board[i + 3][x + 3] == 'O' 
	            ) {
	              	player_winner = 2;
		          	winner = true;
		            break;
	            }
	    	} else {
		            if ( 
		              board[x][i] == 'X' &&
		              board[x + 1][i + 1] == 'X' &&
		              board[x + 2][i + 2] == 'X' &&
		              board[x + 3][i + 3] == 'X' 
		            ) {
		              	player_winner = 1;
			          	winner = true;
			            break;
		            }
	
		            if ( 
		              board[x][i] == 'O' &&
		              board[x + 1][i + 1] == 'O' &&
		              board[x + 2][i + 2] == 'O' &&
		              board[x + 3][i + 3] == 'O' 
		            ) {
		              	player_winner = 2;
			          	winner = true;
			            break;
		            }
	     	}
		}
		
		 // WINNER BY DIAGONAL RIGHT-LEFT
        for( int i = 0; i < z; i++ ) {

          int x;

          if ( k < 11 ) {
            x = (z - i) + 2;

            if ( 
              board[x][i] == 'X' &&
              board[x - 1][i + 1] == 'X' &&
              board[x - 2][i + 2] == 'X' &&
              board[x - 3][i + 3] == 'X' 
            ) {
            	player_winner = 1;
			    winner = true;
				break;
            }

            if ( 
              board[x][i] == 'O' &&
              board[x - 1][i + 1] == 'O' &&
              board[x - 2][i + 2] == 'O' &&
              board[x - 3][i + 3] == 'O' 
            ) {
            	player_winner = 2;
			    winner = true;
				break;
            }
 
          } else {
            x = 6 - i;
            int y = 4 - (z - i);

            if ( 
              board[x][y] == 'X' &&
              board[x - 1][y + 1] == 'X' &&
              board[x - 2][y + 2] == 'X' &&
              board[x - 3][y + 3] == 'X' 
            ) {
        		player_winner = 1;
			    winner = true;
				break;
            }

            if ( 
              board[x][y] == 'O' &&
              board[x - 1][y + 1] == 'O' &&
              board[x - 2][y + 2] == 'O' &&
              board[x - 3][y + 3] == 'O' 
            ) {
            	player_winner = 2;
			    winner = true;
				break;
            }
          }
        }
		
	} // for diagonals
} // function

void show_result() {
	
	cout<<"\n";
	
	for ( int i = 1; i <= 3; i++ ) {
		if ( i == 1 || i == 3 ) {
			for( int j = 0; j <= 48; j++ ) {
				if ( j == 0 || j == 48 ) {
					cout<<"x";
				} else {
					cout<<"-";	
				}
			}	
			
			cout<<endl;	
		} else {
			if ( player_winner == 0 ) {
				system("Color 70");
				cout<<"\n|\tEMPATE"<<"\t\t|"<<endl;
			} else if ( player_winner == 1 ) {
				system("Color A0");
				cout<<"|\tEl JUGADOR GANADOR ES: "<<player1<<"\t\t|"<<endl;	
			} else if ( player_winner == 2 ) {
				system("Color 50");
				cout<<"|\tEl JUGADOR GANADOR ES: "<<player2<<"\t\t|"<<endl;	
			} else {
				system("Color 50");
				cout<<"|\tEl JUGADOR GANADOR ES: "<<computer<<"\t\t|"<<endl;
			}		
		}
	}
	
	cout<<"\n";
}

int computer_move() {

    for (int i = 0; i < 7; i++) {
	    if ( board[0][i] != 'X' && board[0][i] != 'O' ) {
	
	      for (int j = 6; j >= 3; j--) {
	
	        if (board[j][i] == 'X' || board[j][i] == 'O' ) {
	          if (
	            board[j][i] == 'X' &&
	            board[j-1][i] == 'X' &&
	            board[j-2][i] == 'X' &&
	            board[j-3][i] != 'O'
	          ) {
	            return i + 1;
	          }
	        } else {
	          break;
	        }
	      }
	    }
  	}
  	
  	for (int j = 0; j <= 6; j++) {
	    if ( board[0][j] != 'X' && board[0][j] != 'O' ) {
	      for (int i = 6; i >= 3; i--) {
	        if (
	          board[i][j] == 'X' &&
	          board[i][j+1] == 'X' &&
	          board[i][j+2] == 'X'
	        ) {
	          return j + 4;
	        }
	      }
	    }
  	}
  	
  	int random;
  	
  	do {
		random = 1 + rand() % (6);
	} while( board[0][random - 1] == 'X' || board[0][random - 1] == 'O' );
  
  	return random;
}

void heading_game() {
	system("cls");
	
	for ( int i = 1; i <= 3; i++ ) {
		if ( i == 1 || i == 3 ) {
			for( int j = 0; j <= 50; j++ ) {
				if ( j == 0 || j == 50 ) {
					cout<<"x";
				} else {
					cout<<"-";	
				}
			}	
			
			cout<<endl;	
		} else {
			printf("|");
			printf("%31s", "CONECTA CUATRO" );
			printf("%20s", "|\n");
		}
	}
	
	cout<<"\n";
}