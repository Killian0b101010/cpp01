/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:50:11 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/13 20:55:01 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class Weapon;
class HumanA
{
  private:
  std::string name;
  Weapon &weapon;
  
  public:
  HumanA(const std::string& name,Weapon& weapon);
  ~HumanA();
  void attack()const;
};
#endif
