#ifndef _FUTOSHIKI_H_
#define _FUTOSHIKI_H_

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


	void ReadBoard(string path);
	bool Solve(int flags);

	~Futoshiki();

};

#endif
