#include <gzc/games/sokoban/net/Server.hpp>
#include <sys/types.h>
#include <utility>

using namespace gzc::sokoban::net;

Server::Server( const std::string_view& server_name, const std::string_view& server_ip, u_int16_t server_port )
    : _server_name( server_name )
    , _server_ip( server_ip )
    , _server_port( server_port )
{
}

Server::Server()
    : Server( "gzcsokoban", "localhost", 0 )
{
}

Server::Server( const Server& s )
    : Server( s.get_server_name(), s.get_server_ip(), s.get_server_port() )
{
}

Server::~Server()
= default;

std::string Server::get_server_name() const
{
    return this->_server_name;
}

void Server::set_server_name( const std::string_view& s )
{
    this->_server_name = s;
}

std::string Server::get_server_ip() const
{
    return this->_server_ip;
}

void Server::set_server_ip( const std::string_view& s )
{
    this->_server_ip = s;
}

u_int16_t Server::get_server_port() const
{
    return this->_server_port;
}

void Server::set_server_port( u_int16_t p )
{
    this->_server_port = p;
}
