/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:38:34 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/14 00:30:14 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_hpp
# define Base_hpp

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
