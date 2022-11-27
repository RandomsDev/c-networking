#include <cstdlib>
#include <map>
#include <iostream>

enum class ArgEnum
{
	commit = 0,
	branch = 1,
	remote = 2
};

int main(int argc, char* argv[])
{
	std::cout << argv [1] << " \n";
	if (argc > 1 && argv [1] == "--help")
	{
		system ("echo github [commit-message=\"commit via GitHub-CLI\"] [branch=\"master\"] [remote=\"origin\"]");
		return EXIT_SUCCESS;
	}

	std::map <ArgEnum, std::string> argMap;
	
	argMap [ArgEnum::commit] =  "commit via GitHub-CLI";
	argMap [ArgEnum::branch] =  "master";
	argMap [ArgEnum::remote] =  "origin";
	
	for (int i = (int)ArgEnum::commit; i != (int)ArgEnum::remote; i += 1)
	{
		if (argc > i + 1) argMap [static_cast <ArgEnum> (i)] = argv [i];
	}

	std::string command = "git add . && git commit -m " + argMap [ArgEnum::commit] +
	" && git push " + argMap [ArgEnum::remote] + " " +argMap [ArgEnum::remote];
	system (command.c_str ()); 
	return EXIT_SUCCESS;
}
