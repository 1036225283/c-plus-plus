#include <string>

using namespace std;

class User
{
private:
    /* data */
public:
    User(/* args */);
    ~User();
    string name;
    int age;
    int sex;
    string phone;
    string email;
};

User::User(/* args */)
{
}

User::~User()
{
}
