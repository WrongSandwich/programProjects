from socket import *
serverPort = ''
serverName = ''
serverName = raw_input("Please enter a valid server address: ")
while (len(serverPort) < 4):
    serverPort = raw_input("Please enter a valid port of at least 4 digits: ")
serverPort = int(serverPort)
print serverPort
clientSocket = socket(AF_INET, SOCK_DGRAM)
message = raw_input('Input lowercase sentence:')
clientSocket.sendto(message.encode(), (serverName, serverPort))
modifiedMessage, serverAddress = clientSocket.recvfrom(2048)
print(modifiedMessage.decode())
clientSocket.close()
