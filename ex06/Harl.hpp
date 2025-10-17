/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:17:28 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 09:57:39 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
  typedef void (Harl::*ptr)();
  
  public:
  void complain(std::string level);
  
  private:
  void debug( void );
  void info( void );
  void warning( void );
  void error( void );
};
#endif

