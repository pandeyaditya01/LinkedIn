class Address
{
private:
    int zipCode;
    string streetAddress;
    string city;
    string state;
    string country;
};

enum AccountStatus
{
    ACTIVE,
    DEACTIVATED,
    BLOCKED,
    DELETED
};

enum ConnectionInviteStatus
{
    PENDING,
    ACCEPTED,
    IGNORED
};

enum JobStatus
{
    OPEN,
    ON_HOLD,
    CLOSED
};