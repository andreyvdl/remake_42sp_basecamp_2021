/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helloworld.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 12:06:40 by avictor-          #+#    #+#             */
/*   Updated: 2021/04/27 12:06:40 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int	main(void)
{
	int	i = 0;

	vector<string> msg {"Hello", "c++", "World", "from", "VS Code", "and the C++ extension!"};
	for (const string& word : msg)
	{
		++i;
		cout << word << " ";
	}
	cout << endl;
}