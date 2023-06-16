/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:38:32 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/16 00:02:07 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base * generate(void) {
	srand(time(0));
	int	numr = rand() % 3;

	if (numr == 0)
		return new A;
	else if (numr == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p) {
	std::string	msg = "Type of object pointed to by ptr: ";
	if (dynamic_cast<A*>(p))
		std::cout << msg << "A" << std::endl;
	else if ((dynamic_cast<B*>(p)))
		std::cout << msg << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << msg << "C" << std::endl;
	else
		std::cout << "What!!!" << std::endl;
}

void identify(Base& p) {
	std::string	msg = "Type of object pointed to by ptr: ";
	if (dynamic_cast<A*>(&p))
		std::cout << msg << "A" << std::endl;
	else if ((dynamic_cast<B*>(&p)))
		std::cout << msg << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << msg << "C" << std::endl;
	else
		std::cout << "What!!" << std::endl;
}

int main(void) {
	Base * test = NULL;

	test = generate();
	identify(test);
	identify(*test);
}
