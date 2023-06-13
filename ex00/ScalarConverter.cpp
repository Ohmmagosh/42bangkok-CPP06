/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:52:31 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/13 22:47:59 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter( void ) {
	std::cout << "ScalarConverter created" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter& cp) {
	*this = cp;
}

ScalarConverter&	ScalarConverter::operator=( const ScalarConverter& cp) {
	if (this != &cp) {}
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {
	std::cout << "ScalarConverter destroy" << std::endl;
}

void ScalarConverter::convert( char* in ) {
	char *endPtr;
	double c = std::strtod(in, &endPtr);
	convertChar(c);
	convertInt(c);
	convertFloat(c);
	convertDouble(c);
}

void ScalarConverter::convertChar( double in) {
	char	c;
	std::stringstream ss;
	if (isnan(in) == 1) {
		std::cout << "char: " << "impossible" << std::endl;
		return ;
	}
	if (isprint(in) == 1) {
		c = static_cast<char>(in);
		ss << c;
		std::cout << "char: " << "'" + ss.str() + "'" << std::endl;
		return ;
	}
	std::cout << "char: " << "Non displayable" << std::endl;
	return ;
}

void ScalarConverter::convertDouble( double in ) {
	std::cout << "double: " << std::fixed << std::setprecision(1) << in << std::endl;
	return ;

}

void ScalarConverter::convertFloat( double in ) {
	std::stringstream c;
	c << in ;
	if (isnan(in) == 1) {
		std::cout << "float: " << c.str() + 'f' <<std::endl;
		return ;
	}
	double cast = static_cast<double>(in);
	std::cout << "float: " << std::fixed << std::setprecision(1) << cast << 'f' << std::endl;
	return ;
}

void ScalarConverter::convertInt( double in) {
	if (isnan(in) == 1)
		std::cout << "int: " << "impossible" << std::endl;
	std::cout << "int: " << in << std::endl;
	return ;
}
// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0


// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan


// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0
