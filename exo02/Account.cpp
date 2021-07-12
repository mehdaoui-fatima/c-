#include "Account.hpp"

//TODOD implementation needs modifications

Account::Account( int initial_deposit ){
    _amount = initial_deposit;
    std::cout << "index:" << _accountIndex; 
    std::cout << ";amount:" << _amount;  
    std::cout << ";created" << std::endl; 

}

Account::~Account( void )
{
    std::cout << "index:" << _accountIndex; 
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl; 

}

int	Account::getNbAccounts( void ){
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void    Account::displayAccountsInfos( void ){
    std::cout << "accounts:" <<  _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits; 
    std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void		Account::makeDeposit( int deposit )
{
    _nbDeposits++;
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits;
}

bool		Account::makeWithdrawal( int withdrawal )
{
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if (_amount < withdrawal)
    {
        std::cout << " ;withdrawal: " << "refused";
        return (false);
    }else 
    {
        _nbWithdrawals++;
        std::cout<< "withdrawal:" << withdrawal;
        _amount -= withdrawal;
        std::cout << ";amount:" << _amount; 
        std::cout << ";nb_withdrawals:" << _nbWithdrawals;
    }
}

int			Account::checkAmount( void )const{
    
}


void		Account::displayStatus( void ) const {
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout <<";withdrawals : " << _nbWithdrawals << std::endl;
}
