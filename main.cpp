#include <cassert>
#include <iostream>
#include <containers/threadSafe/Queue.h>

void tryQueue()
{
    containers::threadSafe::Queue<int> queue;
    queue.push(1);
    assert(*queue.tryPop() == 1);
}

int main()
{
    tryQueue();
    std::cout << "Repository initialized" << std::endl;
    return 0;
}
