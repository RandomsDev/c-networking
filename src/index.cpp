#include <iostream>
#include <cstdlib>

#define ASIO_STANDALONE
#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

// driver code
int main ()
{
    asio::error_code asioErrorCode;

    std::cout << "C++ Networking Using Asio StandAlone \n";
    std::cin.get ();
    return EXIT_SUCCESS;
}

