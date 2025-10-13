/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:50:03 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/13 23:24:51 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
  this->name = name;
}

HumanB::~HumanB(){std::cout << "HumanB Destroyed" << std::endl;}

void HumanB::set_Weapon(Weapon& newWeapon)
{
  weapon = &newWeapon;
}

void HumanB::attack()
{
  if(weapon != nullptr)
    std::cout << name << " attack with their " << weapon->getType() << std::endl;
  else {
    std::cout << name << " has no weapon " << std::endl;
  }
  return;
}
