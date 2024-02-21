#include "RPN.hpp"

std::queue<std::string> splitString(std::string& input, char delimiter) {
	std::queue<std::string> tokens;
	std::istringstream tokenStream(input);
	std::string token;

	while (std::getline(tokenStream, token, delimiter)) {
		if (token.length() > 1
			|| (std::isdigit(token[0]) == 0 && token[0] != '+' 
				&& token[0] != '-' && token[0] != '/' && token[0] != '*')) {
			std::cout << "Error" << std::endl;
			exit(0);
		}
		tokens.push(token);
	}
	return tokens;
}

void	ft_RPN(std::queue<std::string>& queueInput) {
	std::stack<int> stackNum;
	char operation;
	int firstNum;
	int secondNum;
	int result;
	char* endptr;
	while (!queueInput.empty())
	{
		if (std::isdigit(queueInput.front()[0])) {
			stackNum.push(std::strtol(queueInput.front().c_str(), &endptr, 10));
			queueInput.pop();
		}
		else {
			secondNum = stackNum.top();
			stackNum.pop();
			firstNum = stackNum.top();
			stackNum.pop();
			operation = queueInput.front()[0];
			queueInput.pop();
			switch (operation) {
			case '+':
				result = firstNum + secondNum;
				break;
			case '-':
				result = firstNum - secondNum;
				break;
			case '/':
				if (secondNum == 0) {
					std::cout << "Error" << std::endl;
					return ;
				}
				result = firstNum / secondNum;
				break;
			case '*':
				result = firstNum * secondNum;
				break;
			}
			stackNum.push(result);
		}
	}
	if (stackNum.size() > 1)
		std::cout << "Error" << std::endl;
	else
		std::cout << stackNum.top();
}