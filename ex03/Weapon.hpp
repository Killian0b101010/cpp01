/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:48:58 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/12 22:58:46 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Weapon
{
  private;
  std::string type;

  public;
  const std::string& getType();
  void setType(const std::string& weapon);

  Weapon();
  ~Weapon;
}
