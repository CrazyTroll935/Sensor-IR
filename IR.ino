#include <IRremote.hpp>

void setup(){
Serial.begin(9600);
IrReceiver.begin(3, ENABLE_LED_FEEDBACK);

}

void loop(){
if(IrReceiver.decode()){
String ir_code = String(IrReceiver.decodedIRData.decodedRawData, HEX);

Serial.println(ir_code); //Imprime el valor del boton en datos 32 bits

IrReceiver.resume(); 

if (ir_code == "e916ff00"){        //detecta el Boton 0
 Serial.println("boton 0");
}

if (ir_code == "f30cff00"){              //detecta el Boton 1    
 Serial.println("boton 1");
}

if (ir_code == "e718ff00"){             //detecta el Boton 2
 Serial.println("boton 2");
}

if (ir_code == "a15eff00"){             //detecta el Boton 3
 Serial.println("boton 3");
  } 
 } 
}