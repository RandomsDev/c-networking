// Custom CLI Automate CMake complilation process
// > USAGE: g++ makeit -o makeit
// > ./makeit networking_exmaples

#include <cstdlib>
#include <string>

int main (int argc, char* argv[])
{
    if (argc <= 1) 
    {
        system ("echo Project-Name Required");
        return EXIT_FAILURE;
    }

    char* projectName = argv [1];
    std::string command = "cd build && cmake .. && cmake --build . && cd debug && cls && " 
        + std::string(projectName) + ".exe";
    system (command.c_str());
    return EXIT_SUCCESS;
}



