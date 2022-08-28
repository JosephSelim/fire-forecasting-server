#ifndef SERVERNODE_H
#define SERVERNODE_H

#include <string>
#include <iostream>
#include <winsock2.h>
#pragma comment(lib,"ws2_32.lib") // Winsock Library
#pragma warning(disable:4996) 
#define BUFFER  512
using namespace std;
class ServerNode
{
private:
	string IP;
	int PORT;
	sockaddr_in server, client;
	SOCKET server_socket;

public:
	ServerNode();
	ServerNode(string IP, int PORT);
	void potato();
	void sendData(string IP, int PORT, double currentTemperature);
};
#endif // !SERVERNODE_H
