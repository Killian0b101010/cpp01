/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:17:28 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 12:43:11 by kiteixei         ###   ########.fr       */
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
  enum Level {DEBUG,INFO,WARNING,ERROR,NOTFOUND};  
  void complain(std::string level);
  Level CodeError(char **argv);
  void DisplayMessage(Harl::Level level,Harl harl);
 
  private:
  void debug( void );
  void info( void );
  void warning( void );
  void error( void );
};
#endif

