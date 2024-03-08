/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:33:48 by mde-lang          #+#    #+#             */
/*   Updated: 2024/03/08 13:10:14 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap() : _hp(10), _energy(10), _damage(0) {
    std::cout << "basic ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _energy(10), _damage(0), _name(name) {
    std::cout << "ClapTrap " << name <<" constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::setName(std::string name) {
    if (name.length() == 0)
    {
        this->_name = "Boris";
        return ;
    }
    this->_name = name;
}

void ClapTrap::attack(const std::string& target) {
    
    if (this->_hp <= 0 || this->_energy <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is KO!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_damage << " points of damage!" << std::endl;
    this->_energy--;
    
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hp -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hp <= 0 || this->_energy <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is KO!" << std::endl;
        return ;
    }
    this->_energy--;
    this->_hp += amount;
    std::cout << "ClapTrap " << this->_name << " get repaired and gains " << amount << " hp" << std::endl;
}

int ClapTrap::getHp() {
    return _hp;
}