#include <iostream>
#include <string>

using namespace std;

#define DEFAULT	(1)
#define LOOK_AHEAD (1 << 1)
#define MIN_VALUE_LOOK_AHEAD (1 << 2)

class Futoshiki {

public:
	
	Futoshiki();
	Futoshiki(string path);

	Solve(int flags);

	~Futoshiki();

};