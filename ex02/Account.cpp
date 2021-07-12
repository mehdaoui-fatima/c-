#include "Account.hpp"
/* 
is is the only way 
to access to private static variables : 
otherwise the error Undefined symbols  will shows off
*/

int		Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void  Account::_displayTimestamp(){	
    time_t now = time(0);
    tm* localtm = localtime(&now);
    std::cout << "[" <<localtm->tm_year + 1900;
    std::cout << localtm->tm_mon + 1;
    std::cout << localtm->tm_mday;
    std::cout << "_";
    std::cout << localtm->tm_hour;
    std::cout << localtm->tm_min;
    std::cout << localtm->tm_sec << "] ";
}


Account::Account( int initial_deposit ){
    _displayTimestamp();
    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex =  _nbAccounts;
    _nbAccounts++;
    std::cout << "index:" << _accountIndex; 
    std::cout << ";amount:" << _amount;  
    std::cout << ";created" << std::endl; 
}

Account::~Account( void )
{
    _displayTimestamp();
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

    _displayTimestamp();
    std::cout << "accounts:" <<  _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits; 
    std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void		Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _totalNbDeposits++;
    _nbDeposits++;
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

int			Account::checkAmount( void )const{
       return (1);
}

bool		Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if (_amount < withdrawal)
    {
        std::cout << ";withdrawal:" << "refused" << std::endl;
        return (false);
    }
    else 
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout<< ";withdrawal:" << withdrawal;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        std::cout << ";amount:" << _amount; 
        std::cout << ";nb_withdrawals:" << _nbWithdrawals<< std::endl;
        return (true);
    }
}


void		Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout <<";withdrawals:" << _nbWithdrawals << std::endl;
}
