#include "Atm.h"

Atm::Atm(): m_count(0), m_status(FREE) 
{}

const int Atm::getCount() const {
    return m_count;
}

void Atm::incrementCount() {
    m_count++;
}

const AtmStatus Atm::getStatus() const {
    return m_status;
}

void Atm::toggleState() {
    m_status = static_cast<AtmStatus>((m_status + 1) % STATUS_COUNT);
}
