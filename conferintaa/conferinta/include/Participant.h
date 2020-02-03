#ifndef PARTICIPANT_H
#define PARTICIPANT_H


class Participant
{
    public:
        Participant();
        virtual ~Participant();
       virtual int Vorbeste();

    protected:
        enum  Limba{engleza,romana,germana,franceza};

    private:
};

#endif // PARTICIPANT_H
