/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:46:17 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/08 19:18:01 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
    A a;
    B b;
    C c;

    std::cout << "\033[0;32mPOINTERS\033[0m" << std::endl;
    identify_from_pointer(&b);
    identify_from_pointer(&a);
    identify_from_pointer(&c);

    std::cout << "\033[0;32mREFERENCES\033[0m" << std::endl;
    identify_from_reference(c);
    identify_from_reference(b);
    identify_from_reference(a);
}