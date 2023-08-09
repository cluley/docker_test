#include <iostream>
#include <functional>
#include <vector>
#include <cmath>

#define PI 3.1415926

int main()
{
	double angles[3]{ (30 * PI / 180), (60 * PI / 180), (90 * PI / 180) };

	std::function<void(const double&)> cos = [](const double& angle) {
		std::cout << "cos: " << std::cos(angle) << ' ';
	};

	std::function<void(const double&)> sin = [](const double& angle) {
		std::cout << "sin: " << std::sin(angle) << ' ';
	};

	std::function<void(const double&)> tan = [](const double& angle) {
		std::cout << "tan: " << std::tan(angle) << ' ';
	};

	std::vector<std::function<void(const double&)>> functions = { sin, cos };

	//functions.push_back(tan);

	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}

	return 0;
}