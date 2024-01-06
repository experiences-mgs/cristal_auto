
/*crital auto*/
int in=A0;/*pour rentre des frequences*/
int v;
int z=0;

float t=10.0;/* temp de la frequence*/
void setup() {
  // put your setup code here, to run once:


pinMode(in,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


switch(z){
  /*case 0 pour selectivite des frequences*/
  case 0:
  delay(t);
z=1;
break;
/*case 1 pour frequence selectionné*/
 case 1: 
 v=analogRead(in);
 Serial.write(v);
z=0;
break;
  };

}
