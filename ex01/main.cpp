/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:33:43 by mde-lang          #+#    #+#             */
/*   Updated: 2024/02/27 17:21:00 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

int main() {
    
    ClapTrap instance("Albert");

    instance.setName("");
    instance.attack("Papillon tres mechant");
    instance.takeDamage(9);
    instance.beRepaired(500);
    instance.attack("Papillon tres mechant");
    instance.takeDamage(300);
    std::cout << instance.getHp() << std::endl;
    return 0;       
}