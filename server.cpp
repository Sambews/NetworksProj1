#include <sys/socket.h>
#include <iostream>
#include <cstring>
#include <unistd.h>
#include <netinet/in.h>


int main(int argc, char *argv[]){
	int PORT;
	PORT = std::stoi(argv[0]);

	int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	sockaddr_in serverAddress;
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_port = htons(PORT);
	serverAddress.sin_addr.s_addr = INADDR_ANY;

	bind(serverSocket, (struck sockaddr*)&serverAddress, sizeof(serverAddrewss));

	listen(serverSocket, 10);
	
	int clientSocket = accept(serverSocket, nullptr, nullptr);


	char buffer[1024];
	recv(clientSocket, buffer, sizeof(buffer), 0);

	std::cout << "Message: " << buffer << std::endl;
	

	//Closing socket
	close(serverSocket);
	return 0;

}
