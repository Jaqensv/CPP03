/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:27:57 by mde-lang          #+#    #+#             */
/*   Updated: 2024/03/13 13:44:48 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>
# include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap 
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap &other);
        void guardGate();
};

#endif