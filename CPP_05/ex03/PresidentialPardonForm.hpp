/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:19:03 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/07 17:09:08 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class  PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm(/* args */);
	void	formAction() const;
public:
	PresidentialPardonForm(std::string const &t);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	PresidentialPardonForm &operator = (PresidentialPardonForm const &op);
	~PresidentialPardonForm();
	std::string		getTarget() const;
};