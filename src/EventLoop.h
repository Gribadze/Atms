#include <queue>
#include <vector>

class Async;

class EventLoop {
    public:
        void start();
        void addPenging();
        Async & getAsync() const;
    private:
        std::vector<Async> m_asyncPending;
        std::queue<Async> m_asyncReady;
}
