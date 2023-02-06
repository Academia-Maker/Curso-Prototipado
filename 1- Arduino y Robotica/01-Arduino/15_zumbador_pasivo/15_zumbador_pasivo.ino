#define PIN_BUZZER 9

// Definimos las frecuencias de las notas
int Do=261,
    Re=294,
    Mi=329,
    Fa=349,
    Sol=391,
    SolS=415,
    La=440,
    LaS=455,
    Si=466,
    DoH=523,
    DoHS=554,
    ReH=587,
    ReHS=622,
    MiH=659,
    FaH=698,
    FaHS=740,
    SolH=784,
    SolHS=831,
    LaH=880,
    LaHS=932,
    SiH=988,
    ReH2=1175,
    FaHS2=1480,
    PAU=30000; //pausa

// Definimos los tiempos:
int r = 4000, // redonda
    b = 2000, // blanca
    n = 1000,  // negra
    c = 500,  // corchea
    s = 250,  // semicorchea
    f = 125,  // fusa
    sf= 62;   // semifusa

// MELODIA 1
int melodia1[] = {SiH, ReH2, SiH, ReH2, PAU, SiH, LaH, SiH, SiH, SiH, PAU, ReH2, SiH, SiH, PAU, ReH2, PAU, ReH2, ReH2, PAU, SiH, ReH2, SiH, ReH2, PAU,
                 SiH, LaH, SiH, SiH, SiH, PAU, ReH2, SiH, SiH, PAU, ReH2, PAU, ReH2, ReH2, PAU, ReH2, PAU, SiH, ReH2, PAU, SiH, ReH2, PAU, SiH, ReH2,
                 PAU, SiH, PAU, ReH2, SiH, LaH, SiH, PAU, ReH2,PAU, SiH, ReH2, PAU, SiH, ReH2, PAU, SiH, ReH2, PAU, SiH, PAU, ReH2, SiH, LaH, SiH,
                 PAU, FaHS2, PAU, ReH2, FaHS2, PAU, ReH2, FaHS2, PAU, ReH2 ,FaHS2, PAU, ReH2, FaHS2, PAU, ReH2, LaH, SolHS, SiH, PAU, FaHS2, PAU,
                 ReH2, FaHS2, PAU, ReH2, FaHS2, PAU, ReH2, FaHS2, PAU, ReH2, FaHS2, PAU, ReH2, LaH, SiH, SiH
                };
int tiempos1[] = {s, s, s, s, c, f, s, s, f, s, c, s, s, s, c, s, s, s, s, n, s, s, s, s, c, f, s, s, f, s, c, s, s, s, c, s, s, s, 
                 s, n, s, s, s, s, s, s, s, s, s, s, s, s, f, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, 
                 s, s, s, s, s, s, s, s, s, s, s, s, f, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s,
                };

int melodia2[] = {La, La, La, Fa, DoH, 
                  La, Fa, DoH, La, 
                  MiH, MiH, MiH, FaH, DoH, 
                  SolS, Fa, DoH, La, 
                  LaH, La, La, LaH, SolHS, SolH, 
                  FaHS, FaH, FaHS, LaS, ReHS, ReH, DoHS, 
                  DoH, Si, DoH, Fa, SolS, Fa, La, 
                  DoH, La, DoH, MiH, 
                  LaH, La, La, LaH, SolHS, SolH, 
                  FaHS, FaH, FaHS, LaS, ReHS, ReH, DoHS, 
                  DoH, Si, DoH, Fa, SolS, Fa, DoH, 
                  La, Fa, Do, La};

int tiempos2[] = {c, c, c, s, f, 
                  c, s, f, n, 
                  c, c, c, s, f, 
                  c, s, f, n, 
                  c, s, f, c, s, s, 
                  f, f, c, s, c, s, s, 
                  f, f, c, f, c, c, f, 
                  c, c, f, n, 
                  c, s, f, c, s, s, 
                  f, f, c, s, c, s, s, 
                  f, f, c, s, c, c, f, 
                   c, c, f, n};


const int size_melodia = sizeof(melodia2) / sizeof(melodia2[0]);

void setup()    
{    
  pinMode(PIN_BUZZER, OUTPUT);
}    
     
void loop()   
{
  for (int i=0; i<size_melodia-1; i++){
    tone(PIN_BUZZER, melodia2[i]);
    delay(tiempos2[i]+50);
    noTone(PIN_BUZZER);
  }
}
