/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:17:48 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 12:43:19 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Level Harl::CodeError(char **argv)
{
  std::string table[4] = {"DEBUG","INFO","WARNING","ERROR"};
  std::string input = argv[1];
  for(int i = 0; i < 4; i++)
  {
    if(table[i] == input)
    {
        Level level=(Level)(i);
          return(level);
    }
  }
  return(NOTFOUND);
}

void Harl::DisplayMessage(Harl::Level level,Harl harl)
{
  switch(level)
  {
    case DEBUG:
      harl.complain("DEBUG");
      harl.complain("INFO");
      harl.complain("WARNING");
      harl.complain("ERROR");    
      break;
    case INFO:
      harl.complain("INFO");
      harl.complain("WARNING");
      harl.complain("ERROR");
      break;
    case WARNING:
      harl.complain("WARNING");
      harl.complain("ERROR");
      break;
    case ERROR:
      harl.complain("ERROR");
      break;
    case NOTFOUND:
      std::cout << "[Probably complaining about insignificant problems]" << std::endl;
      break;
  }
}

int main(int ac, char **argv)
{
  if(ac == 2)
  {
    Harl harl;
    Harl::Level level = harl.CodeError(argv);
    harl.DisplayMessage(level,harl);
  }
  return(0);
}
