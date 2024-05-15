public
class Post
{
private:
    int postId;
    User postOwner;
    string text;
    vector<signed char> media;
    int totalReacts;
    int totalShares;
    vector<Comment> comments;

public:
    bool updateText();
};

public
class Comment
{
private:
    int commentId;
    User commentOwner;
    string text;
    int totalReacts;
    vector<Comment> comments;

public:
    bool updateText();
};

public
class Message
{
private:
    int messageId;
    User sender;
    vector<User> recipients;
    string text;
    vector<signed char> media;

public:
    bool addRecipients(vector<User> recipients);
};

public
class ConnectionInvitation
{
private:
    User sender;
    User recipients;
    time_t dateCreated;
    ConnectionInviteStatus status;

public:
    bool acceptConnection();
    bool rejectConnection();
};