// testTags.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tags.h"
#include "TagMeans.h"

using namespace std;

int main()
{
	Tags	tags;
	Tag		tag;
	char	sMsg[80];

	tags.print();
	for (uint16_t i = 0; i < 3; i++)
	{
		// create tag i and put into map
		tag._tag = i;
		tag._type = 10*i;
		tag._count = 11*i;
		tag._offset = 12*i;
		sprintf_s(
			sMsg,
			"Description of field %d",
			tag._tag
		);
		tag._fieldDescription = sMsg;

		sprintf_s(
			sMsg,
			"Name of field %d",
			tag._tag
		);
		tag._fieldName = sMsg;

		sprintf_s(
			sMsg,
			"Value of tag %d is %d",
			tag._tag,
			tag._tag + 2000
		);
		tag._fieldValue = sMsg;

		sprintf_s(
			sMsg,
			"%4X",
			tag._tag
		);
		tag._tagValue = sMsg;

		tag.print();
		tags._tagMap[i] = tag;
	}
	tags.print();

	for (auto it : tags._tagMap)
	{
		cout << it.first << endl;
		cout << 
			it.second._fieldName << 
			":" <<
			it.second._fieldValue <<
			endl;
	}
	TagMeans	tagMeans;
	tagMeans.print();
    return 0;
}

