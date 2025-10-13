/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:49:28 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/13 23:32:24 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

int main()
{
  {
      Weapon club =  Weapon("crude spiked club");
      HumanB Jim(std::string("Jim"));
      Jim.set_Weapon(club);
      Jim.attack();
      club.setType("some other type of club");
      Jim.attack();
  }
  {
      Weapon club = Weapon("crude spiked club");
      HumanA bob((std::string("Bob")), club);
      bob.attack();
      club.setType("some other type of club");
      bob.attack();
  }
  return(0);
}   
