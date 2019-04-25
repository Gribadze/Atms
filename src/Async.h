#include <ctime>
#include <functional>


class Async {
    public:
        Async(const std::function<void()> &t_callback, std::time_t t_pendingTime);
        void run();
        const bool isPendingEnded();
    private:
        std::function<void()> m_callback;
        const std::time_t m_pendingTime;
        const std::time_t m_timeStart;
};
