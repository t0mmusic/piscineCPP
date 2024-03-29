/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:09:05 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/19 09:51:59 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	this->kittyBrain = new Brain();
	std::cout << "*************************************" << std::endl;
	std::cout << "Oh, it's a " << this->type << "!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Cat::~Cat( void ) {
	delete this->kittyBrain;
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " went wherever cats go!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Cat::Cat( const Cat &copy ): kittyBrain(new Brain()) {
	this->type = copy.type;
	*(this->kittyBrain) = *(copy.kittyBrain);
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
}

Cat &Cat::operator=( const Cat &copy ) {
	this->type = copy.type;
	*(this->kittyBrain) = *(copy.kittyBrain);
	std::cout << "*************************************" << std::endl;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	std::cout << "*************************************" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << this->type << " goes MeEeOoW!" << std::endl;
}

void	Cat::printThought( void ) const {
	int	i = rand() % 100;
	std::cout << this->type << " is thinking about ";
	this->kittyBrain->randomThought(i);
	std::cout << "!" << std::endl;
}