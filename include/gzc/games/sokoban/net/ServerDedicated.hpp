#ifndef SOKOBAN_SERVERDEDICATED_HPP
#define SOKOBAN_SERVERDEDICATED_HPP

#include <gzc/games/sokoban/net/Server.hpp>

namespace gzc::sokoban::net
{
    class ServerDedicated : Server
    {
    public:
        ServerDedicated();
        ~ServerDedicated() override;
    };
}

#endif //SOKOBAN_SERVERDEDICATED_HPP
