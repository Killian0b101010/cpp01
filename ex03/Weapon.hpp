/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:48:58 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/13 18:32:26 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include "HumanB.hpp"
#include "HumanA.hpp"
class Weapon
{
  private:
  std::string type;

  public: 
  const std::string& getType()const;
  void setType(const std::string& weapon);

  Weapon(const std::string& choice);
  ~Weapon();
};
#endif
