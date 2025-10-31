/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:49:46 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/16 01:24:35 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class Weapon;
class HumanB
{
  private:
  std::string name;
  
  public:
  HumanB(const std::string& name);
  Weapon *weapon;
  void setWeapon(Weapon& newWeapon);
  void attack();
  ~HumanB();
};
#endif
