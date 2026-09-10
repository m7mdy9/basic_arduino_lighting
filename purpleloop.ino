#define purple1 1
#define purple2 2
#define purple3 6
// intilization of a list to save "time"
int list[] {purple1, purple2, purple3};

// this runs at the setup
void setup() {
  Serial1.begin(115200);
  for (int element : list){
    pinMode(element, OUTPUT);
  }
}
// stuff inside this loops
void loop() {
  for(int element : list){
    light(element);
  }
}
// function for lights
void light(int x) {
  digitalWrite(x, HIGH);
  delay(500);
  digitalWrite(x, LOW);
  delay(50);
}
