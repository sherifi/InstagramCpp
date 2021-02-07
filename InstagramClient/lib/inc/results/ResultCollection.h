#ifndef RESULT_COLLECTION_HPP
#define RESULT_COLLECTION_HPP

#include <vector>
#include "BaseResult.h"

namespace Instagram{
    
template<typename T>
class ResultCollection : public BaseResult
{
public:
    using iterator = typename std::vector<T>::iterator;
    using const_iterator = typename std::vector<T>::const_iterator;

    ResultCollection();
    ResultCollection(const ResultCollection<T>& resultCollection);
    ResultCollection(ResultCollection<T>&& resultCollection);
    ResultCollection(const std::string& errMsg);
    ResultCollection(const char* errMsg);
    
    ResultCollection<T>& operator=(const ResultCollection<T>& resultCollection);
    ResultCollection<T>& operator=(ResultCollection<T>&& resultCollection);
    
    iterator begin() noexcept;
    iterator end() noexcept;
    
    const_iterator begin() const noexcept;
    const_iterator end() const noexcept;
    
    const std::vector<T>& elements() const noexcept;

    const T& get(size_t n) const;
    T& get(size_t n);
    
    const T& operator[](size_t n) const;
    T& operator[](size_t n);
    ResultCollection<T>& operator<<(T&& element);

    void addElement(T&& element);
    size_t size() const noexcept;
    void clear();
    
private:
    std::vector<T> m_elements;
};

}
#endif
