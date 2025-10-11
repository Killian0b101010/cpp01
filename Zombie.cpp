/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:28:54 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/11 19:24:31 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->name = name;
}

Zombie::~Zombie()
{
}

void Zombie::annonce(void)
{
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;  
}

