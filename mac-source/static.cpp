#include <iostream>

class user
{
public:
    user()
    {
        id = user::next_user_id();
        std::cout << "user id = " << id << std::endl;
    }
    
private:
    int id;
    static int next_id;//non-const static data member must be initialized out of line
    
    static int next_user_id();
};

int user::next_id = 0;
//open point 1: when a static member is defalt to 0?(when no need to initialize static member)

//open point 2: what if use inline instruction before this static function definition?
inline int user::next_user_id()
{
    return user::next_id++;
}

int main()
{
    user a_user1;
    user a_user2;
}
