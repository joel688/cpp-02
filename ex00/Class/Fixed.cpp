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

Fixed::Fixed()
{
  std::cout << "Default constructor called"<< std::endl;
	this->number = 0;
	return;
}

// ----------Destructor-----------

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// ----------Getters---------

int		Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
	return(this->number);
}

// ----------Setters----------

void	Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

// ----------Copy_Constructor----------

Fixed::Fixed(const Fixed& class_to_cpy)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = class_to_cpy;
  return;
}

// ----------Operator_Overloader----------

Fixed& Fixed::operator=(const Fixed& to_overload)
{
  std::cout << "Copy assignement operator called" << std::endl;
  this->number = to_overload.getRawBits();
	return(*this);
}
