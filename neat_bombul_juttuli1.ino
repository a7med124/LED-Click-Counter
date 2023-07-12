
int button=5;
int x=0,counter=0;
void setup()
{
  pinMode(x, OUTPUT);
  pinMode(button,INPUT);

}

void loop()
{
  x=digitalRead(button);
  if(x==HIGH)
    if(counter==0){digitalWrite(13,1);counter=1;delay(200);}
      else if(counter==1){digitalWrite(10,1);counter=2;delay(200);}
  else if(counter==2){digitalWrite(12,1);counter=3;delay(200);}
  else if(counter==3){digitalWrite(13,0);
                 digitalWrite(10,0);
                 digitalWrite(12,0);}
    
    
    
  
  
}