/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:57:26 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/13 23:37:12 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
	Data *testData = NULL;
	Data seData = {10, 29};
	testData = &seData;

	uintptr_t serialize = Serializer::serialize(testData);
	Data* deserialize = Serializer::deserialize(serialize);

	if (deserialize == testData)
		std::cout << "it's work" << std::endl;
	else
		std::cout << "Shit something wrong" << std::endl;
	return 0;
}
