/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:29:01 by mde-lang          #+#    #+#             */
/*   Updated: 2024/03/13 13:46:19 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    _hp = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "Basic ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) 
{
    _name = name; // ?? ne fonctionne pas
    _hp = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap " << name <<" constructor called" << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    this->_name = other._name;
    this->_hp = other._hp;
    this->_damage = other._damage;
    this->_energy = other._energy;

    return (*this); 
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap's Gate Keeper mode activated." << std::endl;
}