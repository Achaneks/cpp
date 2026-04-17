/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:16:05 by achanek           #+#    #+#             */
/*   Updated: 2025/10/28 14:37:15 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


int Account:: _nbAccounts =  0;
int Account:: _totalAmount = 0;
int	Account:: _totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){return (_nbAccounts);}
int	Account::getTotalAmount( void ){return (_totalAmount);}
int	Account::getNbDeposits( void ){return (_totalNbDeposits);}
int	Account::getNbWithdrawals( void ){ return (_totalNbWithdrawals);}

void    Account::_displayTimestamp( void )
{
    
}

void	Account::displayAccountsInfos( void )
{
    
}

Account::Account( int initial_deposit ) : _nbAccounts(),_totalAmount(initial_deposit),_totalNbDeposits(0),_totalNbWithdrawals(0);
{
   
}
Account::~Account( void )
{
    
}

void	Account::makeDeposit( int deposit )
{
    
}
bool	Account::makeWithdrawal( int withdrawal )
{
    
}
int		Account::checkAmount( void ) const
{
    
}
void	Account::displayStatus( void ) const
{
    
}

