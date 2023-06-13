/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:57:30 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/13 23:16:13 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ){
	std::cout << "Serializer created!!" << std::endl;
}

Serializer::Serializer( const Serializer& cp ) {
	*this = cp;
}

Serializer& Serializer::operator=( const Serializer& cp ) {
	if (this != &cp){}
	return (*this);
}

Serializer::~Serializer( void ) {
	std::cout << "Serializer destroy!!" << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
