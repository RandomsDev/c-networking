// Custom CLI Automate CMake complilation process
// > USAGE: g++ makeit -o makeit
// > ./makeit networking_exmaples

#include <cstdlib>
#include <string>

int main (int argc, char* argv[])
{
    std::string projectName = "networking_examples";
    if (argc > 1) 
    {
        system ("echo Project-Name Required");
        projectName = std::string(argv [1]);
        return EXIT_FAILURE;
    }

    std::string command = "cd build && cmake .. && cmake --build . && cd debug && cls && " 
        + std::string(projectName) + ".exe";
    system (command.c_str());
    return EXIT_SUCCESS;
}



