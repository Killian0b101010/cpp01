/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:05:19 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/11 16:48:29 by kiteixei         ###   ########.fr       */
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
  Zombie* newZombie( std::string name );
  Zombie();
  ~Zombie();
};
#endif
