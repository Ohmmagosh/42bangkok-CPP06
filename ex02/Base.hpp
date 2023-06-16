/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:38:34 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/16 17:28:42 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <typeinfo>
# include <cstdlib>
# include <time.h>
# include <sstream>

class Base {
	public:
		virtual ~Base();
};

class A:public Base {};
class B:public Base {};
class C:public Base {};

#endif
