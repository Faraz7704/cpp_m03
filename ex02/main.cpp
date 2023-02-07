/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:48:48 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/07 14:53:39 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap ash("Ash");
    FragTrap ash2(ash);

    ash.attack("the air");
    ash.takeDamage(10);
    ash.beRepaired(10);
    ash.highFive();

    return EXIT_SUCCESS;
}