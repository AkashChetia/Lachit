
float TempValue,TempValueC,TempValuemv;

void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  TempValue=analogRead(A0);
  TempValuemv=TempValue*5000/1024;
  TempValueC=(TempValuemv/10)+(-50);
  Serial.print(TempValueC);
  delay(400);
}
