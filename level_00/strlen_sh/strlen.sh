# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlen.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 22:01:19 by dolvin17          #+#    #+#              #
#    Updated: 2022/09/16 22:08:36 by dolvin17         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Assignment name  : strlen_sh
#Expected files   : strlen.sh
#Allowed functions: 
#--------------------------------------------------------------------------------
#Write a shell script that displays the length of the string contained in the
#environment variable PATH, followed by a \n.
#Example:
#$> echo $PATH
#/Users/XXXX/.nvm/versions/node/v16.17.0/bin:... etc  ...ks/Python.framework/Versions/3.10/bin
#$> zsh strlen.sh
#212
#$>*/

string=(echo $PATH)

if [ "$string" ];
	then
echo -n $PATH | wc -m
fi