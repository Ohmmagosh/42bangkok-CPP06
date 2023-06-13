/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:52:34 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/13 22:26:44 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>

class ScalarConverter {
	public:
		ScalarConverter(void);
		ScalarConverter( const ScalarConverter& cp );
		ScalarConverter& operator=( const ScalarConverter& cp );
		~ScalarConverter();
		static void	convert(char* in );
		static void	convertChar( double in );
		static void	convertInt( double in );
		static void	convertFloat( double in );
		static void	convertDouble( double in );
};

#endif
