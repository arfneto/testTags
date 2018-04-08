#pragma once
#include "stdafx.h"
#include <inttypes.h>
#include <map>
#include <string>
#include "Tag.h"

using namespace std;

struct FieldDict
{
	string		_category;
	string		_tagName;
	string		_fieldName;
	string		_decID;
	string		_hexID;
	string		_type;
	string		_count;
};

class TagMeans
{

private:
	map<uint16_t, FieldDict>	dict;

public:
	TagMeans();
	~TagMeans();

	void print();
};

