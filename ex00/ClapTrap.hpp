/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:39 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/05 23:16:01 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

    ClapTrap();

public:
    ClapTrap(std::string name);
    ~ClapTrap();

    ClapTrap(const ClapTrap &);
    ClapTrap &operator=(const ClapTrap& rhs);

    void    attack(std::string const& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif