#include <stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>

namespace ABC{
    class simpleSocket{
        private:
            struct sockaddr_in address;
            int connection;
        public:
        simpleSocket(int domain, int service, int protocol, int port);
    };
}