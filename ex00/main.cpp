/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:04:18 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/13 21:56:17 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cout << "Error" << std::endl;
	return 0;
}
