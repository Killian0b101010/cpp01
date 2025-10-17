/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 04:35:46 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 08:19:05 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
  typedef void (Harl::*ptr)();
  private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  
  public:
  void complain(std::string level);
};
#endif 
