/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 00:32:55 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/12 15:01:23 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
  std::cout << "Zombie Heap created" << std::endl;
}

Zombie::~Zombie()
{
  std::cout << "Zombie Heap destroyed" << std::endl;
}

void Zombie::setName(std::string nameSet)
{
  this->name = nameSet;
}

void  Zombie::annonceHorde(void)
{
  for(int i = 0; i < ZombieCount;i++)
    std::cout <<"[" << i << "]" << name << " " <<  "Zombie" << std::endl;
}
