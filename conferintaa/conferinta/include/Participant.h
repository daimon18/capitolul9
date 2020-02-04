#ifndef PARTICIPANT_H
#define PARTICIPANT_H


class Participant
{
    public:
        Participant();
        virtual ~Participant();
       virtual int Vorbeste();

    protected:
        enum  Limba{romana,germana,franceza,engleza};

    private:
};

#endif // PARTICIPANT_H
