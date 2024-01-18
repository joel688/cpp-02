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

class Fixed
{
	private:
		int 				entier;
		static int const	entier_const;
	public:
							Fixed(int entier);
							~Fixed(void);
							FixedCopy(const Fixed& class_to_cpy);
		Fixed&				OperatorSurcharger(const Fixed& to_overload);
		int					getRawBits(void);
		void				setRawBits(int const raw);

};

#endif
