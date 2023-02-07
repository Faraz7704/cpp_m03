/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:48:48 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 14:45:02 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap ash("Ash");
    ScavTrap ash2(ash);

    ash.attack("the air");
    ash.takeDamage(10);
    ash.beRepaired(10);
    ash.guardGate();

    return EXIT_SUCCESS;
}