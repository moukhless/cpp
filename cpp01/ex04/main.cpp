/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:11:03 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/23 22:51:11 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	openInputFile(std::ifstream& inputFile, std::string fileName)
{
	inputFile.open(fileName);
	if (!inputFile.is_open())
	{
		std::cout << "Unable to open " << fileName << " !!" << std::endl;
		exit (1);
	}
}
int	openOutputFile(std::ofstream& outputFile, std::string newFile)
{
	outputFile.open(newFile);
	if (!outputFile.is_open())
	{
		std::cout << "Unable to open " << newFile << " !!" << std::endl;
		return (0);
	}
	return (1);
}

std::string	replaceS1WithS2(std::string str, std::string s1, std::string s2)
{
	std::string	firstPart;
	std::string	secondPart;
	int			start = 0;

	while (str.find(s1, start) != std::string::npos)
	{
		firstPart = str.substr(0, str.find(s1));
		secondPart = str.substr(str.find(s1) + s1.length());
		str = firstPart + s2 + secondPart;
		start = firstPart.length() + s2.length();
	}
	return (str);
}

void	replaceInToOut(std::ifstream& inputFile, std::ofstream& outputFile, std::string s1, std::string s2)
{
	std::string	str;
	
	while (std::getline(inputFile, str))
	{
		if (!s1.empty() && !s2.empty() && s1.compare(s2))
			str = replaceS1WithS2(str, s1, s2);
		if (inputFile.eof())
			outputFile << str;
		else
			outputFile << str << std::endl;
	}
}

void	writeInOutputFile(char **argv)
{
	std::ofstream	outputFile;
	std::ifstream	inputFile;
	std::string		fileName = argv[1];
	std::string		newFile = fileName + ".replace";
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	openInputFile(inputFile, fileName);
	if (!openOutputFile(outputFile, newFile))
	{
		inputFile.close();
		exit (1);
	}
	replaceInToOut(inputFile, outputFile, s1, s2);
	inputFile.close();
	outputFile.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "!! invalide input !!" << std::endl;
	else
		writeInOutputFile(argv);
	return (0);
}
