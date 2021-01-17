#include "bhe_temirbekova.h"

void setup() 
{
 Serial.begin(115200); 
}

void loop() 
{
  
    double p = 3;
    double q = 7;
    double e = 2;
    int k = 2;
    
    double n = esepteu_n(p, q);    
    double phi = esepteu_phi(p, q);
    
    e = esepteu_e(e, phi);  
    
    double d = esepteu_d(k, phi, e);

    double msg = 20;
    Serial.print("Habarlama derekteri =");
    Serial.println(msg);
    
    double c = esepteu_c(msg, e, n);
    Serial.print("Shifrlangan habarlama =");
    Serial.println(c);

    double m = esepteu_m(c, d, n);
    Serial.print("Bastapki habarlama =");
    Serial.println(m);
    Serial.println("\n --- \n");

    delay(5000);
    
}
