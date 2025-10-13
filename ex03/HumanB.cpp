/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:50:03 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/13 15:54:15 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
  this->name = name;
  std::cout << name << std::endl;
}

HumanB::~HumanB() 
{
  std::cout << "HumanB destroyed" << std::endl;
}


