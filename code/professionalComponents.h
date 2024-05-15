class Job
{
private:
    int jobId;
    string jobTitle;
    time_t dateOfPosting;
    string description;
    CompanyPage company;
    string employmentType;
    Address location;
    JobStatus status;
};

class CompanyPage
{
private:
    int pageId;
    string name;
    string description;
    string type;
    int companySize;
    User createdBy;
    vector<Job> jobs;

public:
    bool createJobPosting();
    bool deleteJobPosting(Job job);
};

class Group : public Subject
{
private:
    int groupId;
    string name;
    string description;
    int totalMembers;
    vector<Observer> members;

public:
    bool updateDescription();
    virtual void attach(Observer &observer)
    {
        members.push_back(observer);
    }
    virtual void detach(Observer &observer)
    {
        // erase the entry of observer from members vector
    }
    virtual void notify()
    {
        // loop over members
        for (auto observer : members)
        {
            observer.update("Hey new post in the group");
        }
    }
};