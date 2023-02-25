unsigned long time = 1000;
void setup() 
{
  // put your setup code here, to run once:

}

void loop() 
{
  timer(time);
}

void timer(unsigned long time_interval)
{
  int counter = 0;
  unsigned long run_time = millis();
  unsigned long prev_time = 0;
  while(counter <= 1)
  {

    if(run_time - prev_time >= time_interval)
    {
      prev_time = run_time;
      counter+=1;
    }
  }
}
