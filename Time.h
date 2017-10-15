/**
 * Record per contenere un'ora formata da ore (h), minuti(m), secondi(s)
 */
struct s_time{
    int h;
    int m;
    int s;
};
typedef struct s_time time; //definizione della parola chiave time
                            //serve per non ripetere sempre struct s_time

//costante Mezzanotte
time const MIDNIGHT = {0,0,0};