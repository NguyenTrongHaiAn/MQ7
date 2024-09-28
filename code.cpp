#define buzzer 10
#define sensor A0
int val;
void setup()
{
  pinMode(buzzer,OUTPUT);
}
void loop()
{
  val=analogRead(sensor);
  if(val>170) digitalWrite(buzzer,1); //Nếu mức độ khí CO >170 thì bật buzzer, bạn có thể chỉnh thông số 170 sao cho thích hợp.
}
