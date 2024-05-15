class Account
{
private:
    string accountId;
    string password;
    string username;
    string email;
    AccountStatus status;

public:
    bool resetPassword();
};