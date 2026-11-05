#include <sys/socket.h>
#include <cstring>
#include <netinet.in/h>
#include <unistd.h>
#include <iostream>
int main(int argc, char* argv[]){
	int PORT;
	port = std::stoi(argv[0]);

	int clientSocket = socket(AF_INET, SOCK_STREAM, 0);

	sockaddr_in serverAddress;
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_port = htons(PORT);
	serverAddress.sin_addr.s_addr = INADDR_ANY;

	connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));

	const char* message = "Hello world";
	
	send(clientSocket, message, strlen(message), 0);
	close(clientSocket);
	return 0;
}
