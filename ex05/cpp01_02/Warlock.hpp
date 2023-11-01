#pragma once
#include <iostream>

class Warlock {
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const &copy);
		Warlock &operator=(Warlock const &copy);
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		std::string getName() const;
		std::string getTitle() const;

		void setTitle(std::string const title);
		void introduce() const;
};
