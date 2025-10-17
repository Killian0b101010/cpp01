/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 04:47:17 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 08:27:54 by kiteixei         ###   ########.fr       */
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
  std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl; 
}

void Harl::complain(std::string level)
{
  std:: cin >> level;
  std::string message[4];   
  message[0] = "DEBUG";
  message[1] = "INFO"; 
  message[2] = "WARNING"; 
  message[3] = "ERROR";
  
  ptr ftab[4] = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
  for (int i = 0; i < 4; i++)
  {
    if(level == message[i]){
      (this->*ftab[i])();
      return;
      }
  }
  std::cout << "Error : Level incorrect" << std::endl;
}


