/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:05:19 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/11 21:07:27 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
  private:
  std::string _name;

  public:
  void annonce(void);
  void setName(std::string _newName);
  Zombie(std::string _name);
  ~Zombie();
};
Zombie* newZombie( std::string _name );
void randomChump( std::string _name );
#endif
