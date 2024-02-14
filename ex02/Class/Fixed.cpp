/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:17:15 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/14 10:15:03 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

// ----------Constructors----------

Fixed::Fixed()
{
  std::cout << "Default constructor called"<< std::endl;
	this->number = 0;
	return;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = number << this->nb_bits_fract;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(number * (1 << this->nb_bits_fract));
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

std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator==(const Fixed& fixed) const
{
  if(this->getRawBits() == fixed.getRawBits())
    return(true);
  return(false);
}

bool Fixed::operator!=(const Fixed& fixed) const
{
  if(this->getRawBits() != fixed.getRawBits())
    return(true);
  return(false);
}

bool Fixed::operator>(const Fixed& fixed) const
{
  if(this->getRawBits() > fixed.getRawBits())
    return(true);
  return(false);
}

bool Fixed::operator<(const Fixed& fixed) const
{
  if(this->getRawBits() < fixed.getRawBits())
    return(true);
  return(false);
}

bool Fixed::operator>=(const Fixed& fixed) const
{
  if(this->getRawBits() >= fixed.getRawBits())
    return(true);
  return(false);
}

bool Fixed::operator<=(const Fixed& fixed) const
{
  if(this->getRawBits() <= fixed.getRawBits())
    return(true);
  return(false);
}

Fixed Fixed::operator+(const Fixed& fixed) const
{
  Fixed result(this->toFloat() + fixed.toFloat());
  return(result);
}

Fixed Fixed::operator-(const Fixed& fixed) const
{
  Fixed result(this->toFloat() - fixed.toFloat());
  return(result);
}

Fixed Fixed::operator*(const Fixed& fixed) const
{
  Fixed result(this->toFloat() * fixed.toFloat());
  return(result);
}

Fixed Fixed::operator/(const Fixed& fixed) const
{
  Fixed result(this->toFloat() / fixed.toFloat());
  return(result);
}

Fixed& Fixed::operator++(void)
{
  this->number++;
  return(*this);
}

Fixed Fixed::operator++(int)
{
  Fixed tmp(*this);
  operator++();
  return(tmp);
}

Fixed& Fixed::operator--(void)
{
  this->number--;
  return(*this);
}

Fixed Fixed::operator--(int)
{
  Fixed tmp(*this);
  operator--();
  return(tmp);
}
// ----------Member_Function----------

float Fixed::toFloat(void) const
{
  return ((float)this->number / (1 << this->nb_bits_fract));
}

int   Fixed::toInt(void) const
{
  return ((this->number) >> this->nb_bits_fract);
}

Fixed Fixed::min(Fixed& a, Fixed& b)
{
  if(a <= b)
    return(a);
  return(b);
}

const Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
  if(a <= b)
    return(a);
  return(b);
}

Fixed Fixed::max(Fixed& a, Fixed& b)
{
  if(a >= b)
    return(a);
  return(b);
}

const Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
  if(a >= b)
    return(a);
  return(b);
}


