#ifndef SOKOBAN_SERVER_HPP
#define SOKOBAN_SERVER_HPP
#include <string>

namespace gzc::sokoban::net
{
    class Server
    {
    private:
        std::string _server_name;
        std::string _server_ip;
        u_int16_t _server_port;
    public:
        Server( std::string server_name, std::string server_ip, u_int16_t server_port );
        Server();
        virtual ~Server();
    };
}

#endif //SOKOBAN_SERVER_HPP
