#include <gzc/games/sokoban/net/Client.hpp>

using namespace gzc::sokoban::net;

Client::Client( const std::string_view& username )
: _username( username )
{
    set_username( username );
}

Client::Client()
: Client( "Gio" )
{
}

Client::Client( const Client& c )
: Client( c.get_username() )
{
}

Client& Client::operator=( const Client& c )
{
    if( this != &c )
    {
        set_username( c .get_username() );
    }
    return *this;
}

Client::~Client()
= default;

void Client::set_username( const std::string_view& username )
{
    this->_username = username;
}

std::string Client::get_username() const
{
    return this->_username;
}
