/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 00:21:37 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/12 15:02:06 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#define ZombieCount 10

class Zombie 
{
  private:
  std::string _name;
  

  public:
  void annonceHorde(void);  
  void setName(std::string _nameSet);
  
  Zombie(std::string _name);
  Zombie();
  ~Zombie();


};
Zombie *zombieHorde( int N, std::string _name );
#endif 
