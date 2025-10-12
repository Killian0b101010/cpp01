/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:08:10 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/12 18:44:45 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
  std::string brain = "HI THIS IS BRAIN";
  std::string *ptr = &brain;
  std::string& ref = brain;

  std::cout << "The memory address of the string variable : "  << &brain << std::endl;
  std::cout << "The memory address held by stringPTR : " << &ptr << std::endl;
  std:: cout << "The memory address held by stringREF : " << &ref << std::endl;
  
  std::cout << "The value of the string variable  : " << brain << std::endl;
  std::cout << "The value pointed to by stringPTR : " << *ptr << std::endl;
  std::cout << "The value pointed to by stringREF : " << ref << std::endl;
}
