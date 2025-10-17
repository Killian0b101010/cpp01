/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:57:36 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/17 02:46:10 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std:: istream::pos_type size_file(std::string &file)
{
  std::ifstream infile(file);
  infile.seekg(0, std::ios::end);   
  return infile.tellg();
}

int ft_error(char **argv)
{
    std::ifstream inf(argv[1]);
    if(!inf)
    {
      std::cout << "Error cannot open file : " << argv[1] << std::endl;
      return(1);
    }
    std::string file = argv[1];
    if(size_file(file) <= 0)
    {
        std::cout << "Error : File " << "[" << argv[1] << "]" << " is empty" << std::endl;
        return(1);
    }
    return(0);
}

void ft_find_and_replace(std::ifstream& inf,std::string& line,std::string& s1,
    std::string& s2,std::ofstream& out)
{
  while(std::getline(inf,line))    
  {
    size_t pos = line.find(s1);
    while((pos = line.find(s1,pos)) != std::string::npos)
    {
      line = line.substr(0,pos) + s2 + line.substr(pos + s1.length());
      pos = line.find(s1,pos + s2.length());
    }
    out << line << std::endl;
  }
}

int main(int ac, char **argv)
{
  if(ac == 4)
  {
    std::ifstream inf(argv[1]);
    std::string s1;
    std::string s2;
    s1 = argv[2];
    s2 = argv[3];
    std::string line;
    std::ofstream out((std::string(argv[1]) + ".replace").c_str());

    if(ft_error(argv))
        return(0);
    ft_find_and_replace(inf,line,s1,s2,out);
    return(0);
  }
  if(ac > 4)
    std::cout << "Error : " << ac << " > 4" << std::endl;
  else 
    std::cout << "Error : " << ac << " < 4" << std::endl;
  return(0);
}

