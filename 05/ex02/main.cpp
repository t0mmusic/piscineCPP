/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:10:54 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/22 12:13:04 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat				steve("Steve", 138);
	RobotomyRequestForm		form("Gerald");
	ShrubberyCreationForm	shrub("Forest");
	PresidentialPardonForm	prez("Ford Prefect");

	form.execute(steve);
	shrub.execute(steve);
	prez.execute(steve);
	steve.SetGrade(5);
	shrub.execute(steve);
	form.execute(steve);
	prez.execute(steve);
	return (0);
}