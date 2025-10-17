/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:17:48 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 10:09:32 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **argv)
{
  if(ac != 2)
    return(0);
  if(ac == 2)
  {
    Harl harl; 
    std::string info = "INFO";
    std::string warning = "WARNING";
    std::string error = "ERROR";
    std::string debug = "DEBUG";
    if(argv[1]== debug)
    {
      harl.complain("DEBUG");
      harl.complain("INFO");
      harl.complain("WARNING");
      harl.complain("ERROR");    
    }
    if(argv[1] == info)
    { 
      harl.complain("INFO");
      harl.complain("WARNING");
      harl.complain("ERROR");
      return(0);
    }
    if(argv[1] == warning)
    {
      harl.complain("WARNING");
      harl.complain("ERROR");
      return(0);
    }
    if(argv[1] == error)
      return((harl.complain("ERROR"),0));
  }
  std::cout << "[Probably complaining about insignificant problems]" << std::endl;
}
