/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:33:43 by mde-lang          #+#    #+#             */
/*   Updated: 2024/03/08 13:48:09 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main() {
    
    ClapTrap instance("Albert");
    ScavTrap scav_instance("Roger");

    instance.setName("");
    std::cout << "base hp = " << instance.getHp() << std::endl;
    instance.attack("Papillon tres mechant");
    instance.takeDamage(9);
    instance.beRepaired(500);
    instance.attack("Papillon tres mechant");
    instance.takeDamage(300);
    std::cout << "hp = " << instance.getHp() << std::endl;
    
    scav_instance.setName("Roger");
    std::cout << "base hp = " << scav_instance.getHp() << std::endl;
    scav_instance.attack("Papillon tres mechant");
    scav_instance.takeDamage(9);
    scav_instance.beRepaired(500);
    scav_instance.attack("Papillon tres mechant");
    scav_instance.takeDamage(300);
    std::cout << "hp = " << scav_instance.getHp() << std::endl;
    return 0;       
}