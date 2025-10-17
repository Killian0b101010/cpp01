/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:17:48 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 11:51:41 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int Harl::CodeError(char **argv)
{
  int  code_error = 0;
  std::string table[4] = {"DEBUG","INFO","WARNING","ERROR"};
  std::string input = argv[1];
  for(int i = 0; i < 4; i++)
  {
    if(table[i] == input)
    {
        code_error = i;
        return(code_error);
    }
  }
  return(4);
}

void Harl::DisplayMessage(int code_error,Harl harl)
{
  switch(code_error)
  {
    case 0:
      harl.complain("DEBUG");
      harl.complain("INFO");
      harl.complain("WARNING");
      harl.complain("ERROR");    
      break;
    case 1:
      harl.complain("INFO");
      harl.complain("WARNING");
      harl.complain("ERROR");
      break;
    case 2:
      harl.complain("WARNING");
      harl.complain("ERROR");
      break;
    case 3:
      harl.complain("ERROR");
      break;
    case 4:
      std::cout << "[Probably complaining about insignificant problems]" << std::endl;
      break;
  }
}
int main(int ac, char **argv)
{
  if(ac == 2)
  {
    Harl harl;
    int code_error = harl.CodeError(argv);
    harl.DisplayMessage(code_error,harl);
  }
  return(0);
}
