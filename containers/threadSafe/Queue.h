#pragma once

#include <deque>
#include <mutex>
#include <optional>
#include <utility>

namespace containers::threadSafe
{

template <typename T>
class Queue final
{
public:
    Queue() = default;
    ~Queue() = default;
    Queue(Queue const&) = delete;
    Queue& operator=(Queue const&) = delete;
    Queue(Queue&&) = delete;
    Queue& operator=(Queue&&) = delete;

    void push(T&&);
    std::optional<T> tryPop();
private:
    std::mutex m_;
    std::deque<T> data_;
};

template <typename T>
void Queue<T>::push(T&& elem)
{
    std::lock_guard<std::mutex> guard(m_);
    data_.emplace_back(std::forward<T>(elem));
}
template <typename T>
std::optional<T> Queue<T>::tryPop()
{
    std::lock_guard<std::mutex> guard(m_);
    if (data_.empty())
    {
        return {};
    }
    auto elem = data_.front();
    data_.pop_front();
    return elem;
}

}  // namespace containers::threadSafe
