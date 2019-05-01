/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019
 *
 * @file LinkedIterator.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief Iterator implementation for a LinkedList.
 * @see C++ Interlude 6 for implementation details
 */


#include "LinkedIterator.h"

template<typename Object>
LinkedIterator<Object>::LinkedIterator(const LinkedList<Object> *someList, Node<Object> *nodePtr) : containerPtr{
        someList}, currentItemPtr{nodePtr} {

}

template<typename Object>
const Object LinkedIterator<Object>::operator*() {
    // TODO: Implement me properly; this is just a stub
    return Object{};
}

template<typename Object>
LinkedIterator<Object> LinkedIterator<Object>::operator++() {
    // TODO: Implement me properly; this is just a stub
    return LinkedIterator<Object>{nullptr, nullptr};
}

template<typename Object>
bool LinkedIterator<Object>::operator==(const LinkedIterator<Object> &rhs) const {
    // TODO: Implement me properly; this is just a stub
    return false;
}

template<typename Object>
bool LinkedIterator<Object>::operator!=(const LinkedIterator<Object> &rhs) const {
    // TODO: Implement me properly; this is just a stub
    return false;
}
