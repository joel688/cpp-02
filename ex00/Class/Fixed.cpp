/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:17:15 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 11:35:35 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

// ----------Constructor----------

Fixed::Fixed(int entier)
{
	this->entier = entier;
	return;
}

// ----------Destructor-----------

Fixed::~Fixed()
{
	std::cout << "Fixed destroyed" << endl;
	return;
}

// ----------Getters---------

int		Fixed::getRawBits(void)
{
	return(this->entier_const);
}

// ----------Setters----------

void	Fixed::setRawBits(int const raw)
{
	this->entier_const = raw;
}

// ----------Copy_Constructor----------

Fixed::FixedCopy(const Fixed& class_to_cpy)
{

}

// ----------Operator_Overloader----------

Fixed& Fixed::OperatorSurcharger(const Fixed& to_overload)
{
	if(this != &class_to_cpy)
		this->entier = class_to_cpy.entier;
	return(this);
}

// ----------Members_Functions----------
