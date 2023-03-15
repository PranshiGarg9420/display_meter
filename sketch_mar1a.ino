#define LED_R 25
#define LED_G 33
#define LED_B 32

#define R_channel 0
#define G_channel 1
#define B_channel 2

#define PWM_frequency 5000
#define PWM_resolution 8

void setup() {
  // put your setup code here, to run once:
  ledcAttachPin(LED_R,R_channel);
  ledcAttachPin(LED_G,G_channel);
  ledcAttachPin(LED_B,B_channel);
  
  ledcSetup(R_channel, PWM_frequency, PWM_resolution);
  ledcSetup(G_channel, PWM_frequency, PWM_resolution);
  ledcSetup(B_channel, PWM_frequency, PWM_resolution);

}

void loop() {
  // put your main code here, to run repeatedly:
  RGB_color(255,51,255);
  delay(500);
  RGB_color(153,251,255);
  delay(500);
  RGB_color(51,255,51);
  delay(500);
  RGB_color(255,51,51);
  delay(500);
  RGB_color(51,153,255);
  delay(500);
  RGB_color(204,255,204);
  delay(500);
  RGB_color(0,153,153);
  delay(500);
}

void RGB_color(int i, int j, int k){
  ledcWrite(R_channel,i);
  ledcWrite(G_channel,j);
  ledcWrite(B_channel,k);
}
