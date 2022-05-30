/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:08:51 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/30 15:20:10 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	Constructor	*/

Zombie::Zombie(void)
{
	return;
}

/*	Destructor; prints name of the zombie being destroyed.	*/

Zombie::~Zombie(void)
{
	std::cout << this->name << " has been destroyed." << std::endl;
	delete this;
	return;
}

/*	Setters	*/

void	Zombie::set_name(std::string str)
{
	name = str;
}

/*	Getters	*/

std::string	Zombie::get_name(void)
{
	return (name);
}

/*	A zombie states its name, and then something intelligent.	*/

void	Zombie::announce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
