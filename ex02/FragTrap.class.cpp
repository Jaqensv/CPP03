/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:04:01 by mde-lang          #+#    #+#             */
/*   Updated: 2024/03/27 12:53:59 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap() : ClapTrap() {
    _hp = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "Basic FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    _name = name;
    _hp = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap " << name <<" constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    *this = other; // cette ligne appelle la surcharge d'operateur =
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    this->_name = other._name;
    this->_hp = other._hp;
    this->_damage = other._damage;
    this->_energy = other._energy;

    return (*this);
}

void FragTrap::setName(std::string name) {
    if (name.length() == 0)
    {
        this->_name = "Boris";
        return ;
    }
    this->_name = name;
}

void FragTrap::attack(const std::string& target) {
    
    if (this->_hp <= 0 || this->_energy <= 0)
    {
        std::cout << "FragTrap " << this->_name << " is KO!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_damage << " points of damage!" << std::endl;
    this->_energy--;
    
}

void FragTrap::takeDamage(unsigned int amount) {
    this->_hp -= amount;
    std::cout << "FragTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->_hp <= 0 || this->_energy <= 0)
    {
        std::cout << "FragTrap " << this->_name << " is KO!" << std::endl;
        return ;
    }
    this->_energy--;
    this->_hp += amount;
    std::cout << "FragTrap " << this->_name << " get repaired and gains " << amount << " hp" << std::endl;
}

int FragTrap::getHp() {
    return _hp;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " does a high fives!" << std::endl;   
}
