#ifndef SOKOBAN_SERVERDEDICATED_HPP
#define SOKOBAN_SERVERDEDICATED_HPP

#include <gzc/games/sokoban/net/Server.hpp>

namespace gzc::sokoban::net
{
    class ServerDedicated : Server
    {
    public:
        explicit ServerDedicated( const std::string_view& server_name, const std::string_view& server_ip, u_int16_t server_port );
        ServerDedicated();
        ServerDedicated( const ServerDedicated& s );
        ServerDedicated& operator=( const ServerDedicated& s );
        ~ServerDedicated() override;
    };
}

#endif //SOKOBAN_SERVERDEDICATED_HPP
