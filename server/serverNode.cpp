#include "serverNode.h"


ServerNode::ServerNode(string IP, int PORT)
{
    this->IP = IP;
    this->PORT = PORT;
}
void ServerNode::initServer() {
    //system("title UDP Server");

    //sockaddr_in server, client;


    // initialise winsock
    WSADATA wsa;
    printf("Initialising Winsock...");
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
    {
        printf("Failed. Error Code: %d", WSAGetLastError());
        exit(0);
    }
    printf("Initialised.\n");

    // create a socket
    //SOCKET server_socket;
    if ((server_socket = socket(AF_INET, SOCK_DGRAM, 0)) == INVALID_SOCKET)
    {
        printf("Could not create socket: %d", WSAGetLastError());
    }
    printf("Socket created.\n");
    
    // prepare the sockaddr_in structure
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(PORT);

    // bind
    if (bind(server_socket, (sockaddr*)&server, sizeof(server)) == SOCKET_ERROR)
    {
        printf("Bind failed with error code: %d", WSAGetLastError());
        exit(EXIT_FAILURE);
    }
    puts("Bind done.");
    printf("Waiting for data...");
    fflush(stdout);
    char message[BUFFER] = {};

    // try to receive some data, this is a blocking call
    int message_len;
    int slen = sizeof(sockaddr_in);
    if (message_len = recvfrom(server_socket, message, BUFFER, 0, (sockaddr*)&client, &slen) == SOCKET_ERROR)
    {
        printf("recvfrom() failed with error code: %d", WSAGetLastError());
        exit(0);
    }

    // print details of the client/peer and the data received
    printf("Received packet from %s:%d\n", inet_ntoa(client.sin_addr), ntohs(client.sin_port));
    printf("Data: %s\n", message);
}

void ServerNode::sendData(double currentTemperature)
{
    char message[BUFFER] = {};
    strcpy(message, to_string(currentTemperature).c_str());

    if (sendto(server_socket, message, strlen(message), 0, (sockaddr*)&client, sizeof(sockaddr_in)) == SOCKET_ERROR)
    {
        printf("sendto() failed with error code: %d", WSAGetLastError());
    }


}
ServerNode::~ServerNode()
{
    closesocket(server_socket);
    WSACleanup();
}