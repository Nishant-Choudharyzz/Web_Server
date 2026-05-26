#include "simpleSocket.hpp"


ABC::simpleSocket::simpleSocket(int domain, int service, int protocol, int port){
    address.sin_family = domain;
    address.sin_port = htons(port);
    connection = socket(domain, service, protocol);
}