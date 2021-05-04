/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:35:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/04 14:47:16 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	void				attack1(std::string const &target);
	void				attack2(std::string const &target);
	void				attack3(std::string const &target);
	void				attack4(std::string const &target);
	void				attack5(std::string const &target);
public:
	FragTrap(/* args */);
	FragTrap(std::string n);
	FragTrap(FragTrap const &copy);
	FragTrap& operator = (FragTrap const &op);
	~FragTrap();
	void		vaulthunter_dot_exe(std::string const & target);
};
