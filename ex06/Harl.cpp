/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:17:16 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 10:05:05 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<  std::endl;
}

void Harl::info(void)
{
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month" << std::endl;
}

void Harl::error(void)
{
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; 
}

void Harl::complain(std::string level)
{
  ptr tab[4] = {&Harl::error,&Harl::warning,&Harl::info,&Harl::debug};
  std:: string message[4] = {"DEBUG","INFOS","ERROR","WARNING"};
  for(int i = 0; i < 4; i++)
  {
    if(message[i] == level)
    {
      (this->*tab[i])();
      return;
    }
  }
}
