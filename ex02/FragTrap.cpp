/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:51:17 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 14:52:33 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "FragTrap - " << this->name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap - " << this->name << " destructed." << std::endl;
}

void    FragTrap::highFive(void)
{
    if ( this->energyPoints <= 0 ) {
        std::cout << "FragTrap - " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap - " << this->name << " high fives everybody." << std::endl;
    this->energyPoints -= 1;
}