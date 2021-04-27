/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:26:37 by aduregon          #+#    #+#             */
/*   Updated: 2021/04/27 10:32:45 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	type;
	std::string	name;
public:
	Zombie();
	Zombie(std::string t, std::string n);
	~Zombie();
	void		set_type(std::string s);
	void		set_name(std::string s);
	std::string	get_type();
	std::string	get_name();
	void		announce();
};

#endif