/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHordre.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:20:14 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/12 15:01:42 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string _name)
{
  Zombie *z = new Zombie[N];
  for(int i = 0; i < N; i++){
  z[i].setName(_name);
  }
  return(z);
}

