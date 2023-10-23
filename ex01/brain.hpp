/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:37:11 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 19:08:02 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
    public:
        Brain();
		// Brain(std::string ideas[100]);
        Brain(const Brain &object);
        Brain &operator=(const Brain &object);
        ~Brain();
		std::string getIdeas(int i) const;
        void setIdeas(std::string idea, int number);
};

#endif