#include <gzc/games/sokoban/net/ServerDedicated.hpp>

using namespace gzc::sokoban::net;

ServerDedicated::ServerDedicated( const std::string_view& server_name, const std::string_view& server_ip, u_int16_t server_port )
: Server( server_name, server_ip, server_port )
{
}

ServerDedicated::ServerDedicated()
    : ServerDedicated( "gzcsokoband", "localhost", 22497 )
{
}

ServerDedicated::ServerDedicated( const ServerDedicated& s )
: ServerDedicated( s.get_server_name(), s.get_server_ip(), s.get_server_port() )
{
}

ServerDedicated& ServerDedicated::operator=( const ServerDedicated& s )
{
    if( this != &s )
    {
        set_server_name( s.get_server_name() );
        set_server_ip( s.get_server_ip() );
        set_server_port( s.get_server_port() );
    }
    return *this;
}

ServerDedicated::~ServerDedicated()
= default;
