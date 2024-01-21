#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <queue>
#include <stack>
#include <sstream>

std::queue<std::string> splitString(std::string& input, char delimiter);
void	ft_RPN(std::queue<std::string>& queueInput);

#endif