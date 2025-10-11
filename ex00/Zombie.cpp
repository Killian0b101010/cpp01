/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:28:54 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/12 00:18:40 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->name = name;
  std::cout << "Zombie" << " " << name << " " <<  "created" << std::endl;
}
Zombie::~Zombie()
{
  std::cout << "Zombie" << " " << name << " " <<  "destroyed" << std::endl;
}
void Zombie::annonce(void){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
void Zombie::setName(std::string newName){this->name = newName;}
