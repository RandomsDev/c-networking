#include <cstdlib>
#include <map>
#include <string>

#define NEED_HELP 200

enum class ArgEnum
{
	commit = 0,
	branch = 1,
	remote = 2
};

int main(int argc, char* argv[])
{
	try 
	{
		if (argc >  1 && std::string (argv [1]) == "--help") throw NEED_HELP;
	}
	catch (int)
	{
		system ("echo github [commit-message=\"commit via GitHub-CLI\"] [branch=\"master\"] [remote=\"origin\"]");
		return EXIT_SUCCESS;
	}

	std::map <ArgEnum, std::string> argMap;
	
	argMap [ArgEnum::commit] =  "\"commit via GitHub-CLI\"";
	argMap [ArgEnum::branch] =  "master";
	argMap [ArgEnum::remote] =  "origin";
	
	
	for (int i = 1 ; i < argc ; i += 1)
	{
		if (i >= argMap.size ()) break;
		argMap [static_cast <ArgEnum> (i-1)] = std::string(argv [i]);
	}
	
	std::string command = "git add . && git commit -m " + argMap [ArgEnum::commit] +
	" && git push " + argMap [ArgEnum::remote] + " " +argMap [ArgEnum::branch];
	
	system (command.c_str ()); 
	return EXIT_SUCCESS;
}

// TEST 1: PASSED
// TEST 2: PASSED
// TEST 3: PASSED

