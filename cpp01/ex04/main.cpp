/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:11:03 by amoukhle          #+#    #+#             */
/*   Updated: 2023/10/21 21:12:44 by amoukhle         ###   ########.fr       */
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

void	replaceInToOut(std::ifstream& inputFile, std::ofstream& outputFile, std::string s1, std::string s2)
{
	std::string	str;
	
	while (std::getline(inputFile, str))
	{
		if (inputFile.eof())
			outputFile << str;
		else
			outputFile << str << std::endl;
	}
	outputFile << s1;
	if (!s2.empty() && !s1.empty())
		outputFile << std::endl;
	outputFile << s2;
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
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "!! invalide input !!" << std::endl;
	else
		writeInOutputFile(argv);
	return (0);
}
