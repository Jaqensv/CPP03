/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:33:43 by mde-lang          #+#    #+#             */
/*   Updated: 2024/03/27 12:55:35 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int main() {
    
    ClapTrap instance("Albert");
    FragTrap frag_instance("Roger");

    instance.setName("");
    std::cout << "base hp = " << instance.getHp() << std::endl;
    instance.attack("Papillon tres mechant");
    instance.takeDamage(9);
    instance.beRepaired(500);
    instance.attack("Papillon tres mechant");
    instance.takeDamage(300);
    std::cout << "hp = " << instance.getHp() << std::endl;
    
    frag_instance.setName("Roger");
    std::cout << "base hp = " << frag_instance.getHp() << std::endl;
    frag_instance.attack("Papillon tres mechant");
    frag_instance.takeDamage(9);
    frag_instance.beRepaired(500);
    frag_instance.attack("Papillon tres mechant");
    frag_instance.takeDamage(300);
    std::cout << "hp = " << frag_instance.getHp() << std::endl;
    frag_instance.highFivesGuys();
    return 0;       
}