/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:01:41 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/11 21:04:37 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
  Zombie *Zomb = new Zombie(name);
  Zomb->setName("HeapChange");
  return(Zomb);
}
