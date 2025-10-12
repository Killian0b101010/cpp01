/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:49:10 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/12 23:03:33 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Weapon::Weapon(){std::cout >> "Weapond Created" std::endl;}

Weapon::~Weapon(){std::cout >> "Weapon Destroyed" std::endl;}

const std::string& Weapon::getType()const {return type;}

Weapon::void setType( const std::string& weapon){this->type = weapon;}
