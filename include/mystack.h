#ifndef MYSTACK_H
#define MYSTACK_H

#include <vector>

class mystack
{
    public:
        mystack();
        virtual ~mystack();
        int     getTop();
        void    push(int item);
        int     pop();
    protected:
    private:
        std::vector<int> mStack;
};

#endif // MYSTACK_H
