#include <gzc/games/sokoban/net/Server.hpp>
#include <utility>

using namespace gzc::sokoban::net;

Server::Server( std::string server_name, std::string server_ip, u_int16_t server_port )
    : _server_name( std::move(server_name) ), _server_ip( std::move(server_ip) ), _server_port( server_port )
{
}

Server::Server()
    : Server( "gzcsokoban", "localhost", 0 )
{
}

Server::~Server()
= default;
