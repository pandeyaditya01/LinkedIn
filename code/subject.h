class Subject
{
public:
    virtual void attach(Observer &observer) = 0;
    virtual void detach(Observer &observer) = 0;
    virtual void notify() = 0;
};