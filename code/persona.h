class Person
{
    // Person class would be Abstract
private:
    string name;
    Address address;
    string email;
    string phone;
    Account account;

    // abstract method
};

class Admin : public Person
{
public:
    bool blockUser(User user);
    bool unblockUser(User user);
    bool disablePage(CompanyPage page);
    bool enablePage(CompanyPage page);
    bool deleteGroup(Group group);
};

class User : public Person, public Observer
{
private:
    int userId;
    time_t dateOfJoining;
    Profile profile;

    vector<User> followsUsers; // contain most recent 10 follows
    vector<CompanyPage> followCompanies;
    vector<User> connections;
    // vector<User> followsUsers;
    // vector<CompanyPage> followCompanies;
    vector<Group> joinedGroups;
    vector<CompanyPage> createdPages;
    vector<Group> createdGroups;

public:
    bool sendMessage(Message message);
    bool sendInvite(ConnectionInvitation invite);
    bool cancelInvite(ConnectionInvitation invite);
    bool createPage(CompanyPage page);
    bool deletePage(CompanyPage page);
    bool createGroup(Group group);
    bool deleteGroup(Group group);
    bool createPost(Post post);
    bool deletePost(Post post);
    bool createComment(Comment comment);
    bool deleteComment(Comment comment);
    bool react(Post post);
    bool requestRecommendation(User user);
    bool acceptRecommendation(User user);
    bool applyForJob(Job job);

    void update(string &message) override
    {
        // implementation to receive notifications
    }
};