#pragma once
#include <iostream>

class Warlock 
{
	private:
		std::string _name;
		std::string _title;
		Warlock(Warlock const &copy);
		Warlock &operator=(Warlock const &copy);
		Warlock();

	public:

		Warlock(std::string name, std::string title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);
		void introduce() const;
};
