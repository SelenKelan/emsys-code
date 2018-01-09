#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define closesocket(s) close(s)
typedef int SOCKET;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;
 
#include <stdio.h>
#include <stdlib.h>
#define PORT 23
#include <iostream> 
 
 
int main(int argc, char* argv[])
{
    char ip[32]="127.0.0.1";
    char buffer[32]="allumer";
    if (argc != 5) { // Check the value of argc. If not enough parameters have been passed, inform user and exit.
        std::cout << "Usage is -ip <ip> -msg <msg>\n"; // Inform the user of how to use the program
        exit(0);
    }





    int erreur = 0;
    int sock_err;
      
    SOCKET sock;
    SOCKADDR_IN sin;
 
    if(!erreur)
    {
        /* Création de la socket */
        sock = socket(AF_INET, SOCK_STREAM, 0);
 
        /* Configuration de la connexion */
        sin.sin_addr.s_addr = inet_addr(ip);
        sin.sin_family = AF_INET;
        sin.sin_port = htons(PORT);
 
        /* Si le client arrive à se connecter */
        if(connect(sock, (SOCKADDR*)&sin, sizeof(sin)) != SOCKET_ERROR)
	{
            printf("Connexion à %s sur le port %d\n", inet_ntoa(sin.sin_addr), htons(sin.sin_port));
	    sock_err = send(sock, buffer, 32, 0);
 
            if(sock_err != SOCKET_ERROR)
                printf("Chaine envoyée : %s\n", buffer);
            else
                printf("Erreur de transmission\n");
	}
        else
            printf("Impossible de se connecter\n");
 
        /* On ferme la socket précédemment ouverte */
        closesocket(sock);
 
    }
 
    return EXIT_SUCCESS;
}
