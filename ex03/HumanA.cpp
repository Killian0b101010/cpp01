/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:50:17 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/13 23:22:28 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) 
  : name(name),weapon(weapon) 
{

}

HumanA::~HumanA(){std::cout << "HumanA Destroyed" << std::endl;}


void HumanA::attack()const
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
    return;
}
