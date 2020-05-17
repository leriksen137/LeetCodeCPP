#include <iostream>
#include <string>

int main() {
	const std::string title = "LEETCODE TESTING PROJECT";
	const std::string stars(title.length(), '*');
	const std::string bars(title.length(), '=');
	
	std::cout << stars << std::endl
		<< bars << std::endl
		<< title << std::endl
		<< bars << std::endl
		<< stars << std::endl;
}
