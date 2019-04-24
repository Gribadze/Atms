typedef enum { FREE, BUSY, STATUS_COUNT } AtmStatus;
class Atm {
    public:
        Atm();
        const int getCount() const;
        void incrementCount();
        const AtmStatus getStatus() const;
        void toggleState();
    private:
        int m_count;
        AtmStatus m_status;
};
