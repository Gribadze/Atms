#include "Async.h"

Async::Async(const std::function<void()> &t_callback, std::time_t t_pendingTime)
    : m_callback(t_callback), m_pendingTime(std::move(t_pendingTime)), m_timeStart(std::time(0)) 
{}

const bool Async::isPendingEnded() {
    const std::time_t timestamp = std::time(0);
    return (timestamp > m_timeStart + m_pendingTime);
}

void Async::run() {
    m_callback();
}
