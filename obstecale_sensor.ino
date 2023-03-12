void setup() {
  pinMode(7, OUTPUT);// Output of led & buzar
  pinMode(5,INPUT);// output of IR sensor

}

void loop() {
  int val = digitalRead(5);// to read the burzer value
  if(val==0){
    digitalWrite(7,1);// to turn on the led
  }
  else{
    digitalWrite(7,0);// to turn of the led
  }
}
