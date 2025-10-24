/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 01:01:33 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/24 02:01:50 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap &frag);
  FragTrap &operator=(const FragTrap &other);
  void highFivesGuys(void);
  void attack(const std::string &target);
  ~FragTrap();

private:
  const std::string NAME;
};
#endif
