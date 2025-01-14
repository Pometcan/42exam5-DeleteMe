#pragma once
#include <string>
#include <iostream>

using namespace std;

class Warlock
{
	private:
		string name;
		string title;
	public:
		const string &getName() const;
		const string &getTitle() const;
		void setTitle(const string &title);
		Warlock(const string &name, const string &title);
		~Warlock();
		void introduce() const;
};
