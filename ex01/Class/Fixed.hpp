/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:53:12 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 11:33:14 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int 				      number;
		static int const  nb_bits_fract = 8;
	public:
							        Fixed();
							        ~Fixed(void);
                      Fixed(const int number);
                      Fixed(const float number);
							        Fixed(const Fixed& class_to_cpy);
		Fixed&				    operator=(const Fixed& to_overload);
		int					      getRawBits(void) const;
		void				      setRawBits(int const raw);
    float             toFloat(void) const;
    int               toInt(void) const;
};

    std::ostream&     operator<<(std::ostream& out, const Fixed& fixed);

#endif
