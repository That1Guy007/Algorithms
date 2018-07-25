//MST.h

#ifndef MST_H
#define MST_H

#include <string>


class MST{
private:
	std::string** nodes;
	
	int size;
public:
	MST();
	~MST();
	void Input();
	void print();
	void Prims();
};

#endif
