#include <iostream>
#include <cstdlib>
#include <string>

#define ASIO_STANDALONE
#include <asio.hpp>

#include <asio/ts/buffer.hpp>
#include <asio/ts/socket.hpp>
#include <asio/ts/internet.hpp>

// driver code
int main()
{
	std::cout << "Cplusplus Networking \n";

	asio::error_code asioErrCode;

	// plateform instance
	asio::io_context context;

	// 93.184.216.34 example.com
	// 127.0.0.1 localhost

	asio::ip::address ipAddress = asio::ip::make_address("127.0.0.1", asioErrCode);
	asio::ip::tcp::endpoint endPoint(ipAddress, 80);

	// creates a socket
	asio::ip::tcp::socket socket(context);

	// Connect to server
	socket.connect(endPoint, asioErrCode);

	if (socket.open())
	{
		std::string request =
			"GET /index.html HTTP/1.1\r\n"
			"HOST: example.com\r\n"
			"Connection: close\r\n\r\n";
	}

	if (!asioErrCode)
	{
		std::cout << "Connected to port \n";
	}
	else
	{
		std::cout << "Connection fail with err: "
			<< asioErrCode.message() << "\n";
	}

	std::cin.get();
	return EXIT_SUCCESS;
}
