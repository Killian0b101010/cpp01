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
  std::string name;

  public:
  void annonce(void);
  void setName(std::string newName);
  // Constructeur
  Zombie(std::string name);
  // Destructor
  ~Zombie();
};

//Fonction 
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
